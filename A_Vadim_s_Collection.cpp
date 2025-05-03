#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        vector<long long> cnt(10,0);
        for(long long i=0;i<s.size();i++){
            cnt[s[i]-'0']++;
        }
        string temp = "";
        for(long long i=0;i<10;i++){
            long long req = 9-i;
            for(long long d=req;d<=9;d++){
                if(cnt[d]){
                    temp += (char)(d+'0');
                    cnt[d]--;
                    break;
                }
            }
        }
        cout<<temp<<endl;
    }
    fastio()
    return 0;
}