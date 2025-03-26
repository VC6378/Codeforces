#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
        }
        else{
            vector<long long> ans;
            for(long long i=2;i<=n;i+=2){
                ans.push_back(i);
            }
            for(long long i=1;i<=n;i+=2){
                ans.push_back(i);
            }
            for(long long i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }   
            cout<<endl;
        }
    }
    fastio()
    return 0;
}