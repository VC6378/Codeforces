#include <bits/stdc++.h>

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{

    int test_cases = {0};

    std::cin >> test_cases;
    while (test_cases--)
    {
        int N = {0},
            temp = {0};

        std::vector<int> chef_sizes;
        std::vector<int> glov_sizes;

        std::cin >> N;
        for (int i = {0}; i < N; i++)
        {
            std::cin >> temp;
            chef_sizes.push_back(temp);
        }

        for (int i = {0}; i < N; i++)
        {
            std::cin >> temp;
            glov_sizes.push_back(temp);
        }

        int front_f = {0},
            back_f = {0};

        for (int i = {0}; i < N; i++)
        {
            if (chef_sizes[i] <= glov_sizes[i])
                front_f++;
            if (chef_sizes[i] <= glov_sizes[N - i - 1])
                back_f++;
        }

        if (front_f == N && back_f == N)
            std::cout << "both" << '\n';
        else if (front_f == N)
            std::cout << "front" << '\n';
        else if (back_f == N)
            std::cout << "back" << '\n';
        else
            std::cout << "none" << '\n';
    }
     return 0;
}