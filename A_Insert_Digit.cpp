#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long n,d;
        cin>>n>>d;
        string s;
        cin>>s;
        bool ans=0;
        // cout<<s<<endl;
        for(int i=0;i<n;i++){
            if (s[i] - '0' >= d) {
            cout << s[i];
        } else {
            cout << d;
            for (int j = i; j < n; ++j) {
                cout << s[j];
            }
            ans=1;
            break;

        }
        // cout<<endl;
        }
        // cout<<d;
        if(!ans) cout<<d;
        cout<<endl;
    }
    fastio()
    return 0;
}