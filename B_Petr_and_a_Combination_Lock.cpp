#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int m = 1<<n;
    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if((1<<j)&i){
                sum+=vec[j];
            }
            else{
                sum-=vec[j];
            }
        }

        if(sum%360==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    fastio()
    return 0;
}