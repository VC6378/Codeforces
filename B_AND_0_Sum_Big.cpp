void Download_mgr::separate_binary_data(const std::string &binary_name)
{
    // Ensure the binary file exists
    std::size_t total_binary_size = std::filesystem::exists(binary_name) ? std::filesystem::file_size(binary_name) : 0;

    if (total_binary_size == 0)
    {
        SPDLOG_ERROR("Downloaded binary file not found or empty: {}", binary_name);
        return;
    }

    SPDLOG_INFO("Downloaded binary file size: {} bytes", total_binary_size);

    // Set binary separation sizes
    const std::size_t signature_size = 32; // Signature size constant
    std::size_t certificate_size = total_binary_size - (otabinary_size + signature_size);

    if (certificate_size <= 0)
    {
        SPDLOG_ERROR("Invalid certificate size calculated! Check binary size.");
        return;
    }

    SPDLOG_INFO("OTA Binary Size: {} bytes", otabinary_size);
    SPDLOG_INFO("Signature Size: {} bytes", signature_size);
    SPDLOG_INFO("Certificate Size: {} bytes", certificate_size);

    // Read and separate binary components
    std::ifstream file(binary_name, std::ios::binary);
    if (!file.is_open())
    {
        SPDLOG_ERROR("Failed to open downloaded file for extraction.");
        return;
    }

    // Allocate memory for each section
    std::vector<char> binaryData(otabinary_size);
    std::vector<char> signature(signature_size);
    std::vector<char> certificate(certificate_size);

    // Read OTA Binary (Offset 0)
    file.seekg(0, std::ios::beg);
    file.read(binaryData.data(), otabinary_size);
    SPDLOG_INFO("Binary Data (First 10 bytes): {}", std::string(binaryData.begin(), binaryData.begin() + std::min(10, (int)binaryData.size())));

    // Read Signature (Offset otabinary_size)
    file.seekg(otabinary_size, std::ios::beg);
    file.read(signature.data(), signature_size);
    SPDLOG_INFO("Signature (First 10 bytes): {}", std::string(signature.begin(), signature.begin() + std::min(10, (int)signature.size())));

    // Read Certificate (Offset otabinary_size + signature_size)
    file.seekg(otabinary_size + signature_size, std::ios::beg);
    file.read(certificate.data(), certificate_size);
    SPDLOG_INFO("Certificate (First 10 bytes): {}", std::string(certificate.begin(), certificate.begin() + std::min(10, (int)certificate.size())));

    // Close the file
    file.close();

    SPDLOG_INFO("Binary separation completed successfully.");
}