#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,x;
        cin>>n>>x;
        vector<long long int> vec;
        if(n%2==0){
            for(long long int i=1; i<=(n/2); i++){
                vec.push_back(x+i);
                vec.push_back(x-i);
            }
        }
        else{
            vec.push_back(x);
            for(long long int i=1; i<=(n/2); i++){
                vec.push_back(x+i);
                vec.push_back(x-i);
            }
        }

        for(long long int i=0; i<n; i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}