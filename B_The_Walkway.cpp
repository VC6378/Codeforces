#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
            int n, m, d;
    std::cin >> n >> m >> d;
    
    std::vector<int> s(m + 2);
    for (int i = 1; i <= m; i++) {
        std::cin >> s[i];
    }
    s[0] = -d + 1;
    s[m + 1] = n + 1;
    
    int sum = 0;
    for (int i = 1; i <= m + 1; i++) {
        sum += (s[i] - s[i - 1] - 1) / d;
    }
    
    int ans = n + 1;
    int cnt = 0;
    
    for (int i = 1; i <= m; i++) {
        int res = sum;
        res -= (s[i] - s[i - 1] - 1) / d;
        res -= (s[i + 1] - s[i] - 1) / d;
        res += (s[i + 1] - s[i - 1] - 1) / d;
        res += m - 1;
        if (res < ans) {
            ans = res;
            cnt = 1;
        } else if (res == ans) {
            cnt += 1;
        }
    }
    std::cout << ans << " " << cnt << "\n";
    }
    fastio()
    return 0;
}