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
        vector<long long> vec(n);
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }
        if(is_sorted(vec.begin(),vec.end())){
            cout<<"YES"<<endl;
        }
        else{
            if(vec[0]>vec[1]){
                cout<<"NO"<<endl;
            }
            else{
                for(long long i=1;i<n;i++){
                    long long mini = min(vec[i],vec[i-1]);
                    vec[i]-=mini;
                    vec[i-1]-=mini;
                }

                if(is_sorted(vec.begin(),vec.end())){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    fastio()
    return 0;
}