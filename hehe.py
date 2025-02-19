from collections import Counter
import re

def word_frequencies(text: str):
    # Normalize the text: convert to lowercase and remove punctuation
    words = re.findall(r'\b\w+\b', text.lower())
    
    # Count occurrences of each word
    word_counts = Counter(words)
    
    # Sort words by frequency in descending order
    sorted_word_counts = sorted(word_counts.items(), key=lambda x: x[1], reverse=True)
    
    # Display results
    print("Word Frequencies:")
    for word, count in sorted_word_counts:
        print(f"{word}: {count}")

# Example usage
text = "Hello world! This is a test. Hello, this test is only a test."
word_frequencies(text)
