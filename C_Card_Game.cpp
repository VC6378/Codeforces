#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool beats(long long n,long long b,long long a){
    if(b==1) return a==n;
    if(b==n) return a!=1;
    return b>a;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        vector<long long> alice;
        vector<long long> bob;
        for(long long i=0;i<n;i++){
            if(s[i]=='A'){
                alice.push_back(i+1);
            }
            else{
                bob.push_back(i+1);
            }
        }
        bool ans = false;
        for(long long i=0;i<alice.size();i++){
            bool flag = true;
            for(long long j=0;j<bob.size();j++){
                if(beats(n,bob[j],alice[i])){
                    flag = false;
                    break;
                }
            }

            if(flag){
                ans=true;
                break;
            }
        }
        if(ans){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    fastio()
    return 0;
}