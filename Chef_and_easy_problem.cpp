#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        vector<long long int> vec;
        for(long long int i=0; i<n; i++){
            long long int x;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end(),greater<int>());
        long long int sum = 0;
        for(long long int i=0; i<n; i++){
            if(i%2==0){
                sum+=vec[i];
            }
        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}