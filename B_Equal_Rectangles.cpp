#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long q;
    cin>>q;
    while(q-->0){
        long long n;
        cin>>n;
        vector<long long> vec(4*n);
        long long sz=4*n;
        for(long long i=0; i<4*n; i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        long long area = vec[0]*vec[sz-1];

        bool flag=true;
        for(long long i=0; i<n; i++){
            long long lg = 2*i; 
            long long rg = 4*n-(2*i)-1;
            if(vec[lg]!=vec[lg+1]||vec[rg]!=vec[rg-1]||vec[lg]*1ll*vec[rg]!=area){
                flag=false;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}