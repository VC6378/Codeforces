#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long> vec(n+1);
        for(long long i=1;i<=n;i++){
            cin>>vec[i];
        }
        long long left = -1;
        long long right = 1e9;
        while(left+1<right){
            long long mid = (left+right)/2;
            long long nk=k;
            for(long long i=1,lst=0;i<=n;i++){
                if(vec[i]>mid && s[i-1]=='R'){
                    lst=0;
                }
                else if(vec[i]>mid && s[i-1]=='B'){
                    nk-=(lst==0);
                    lst=1;
                }
            }
            if(nk>=0){
                right=mid;
            }
            else{
                left=mid;
            }
        }

        cout<<right<<endl;
    }
    fastio()
    return 0;
}