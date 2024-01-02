#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,k,s;
        cin>>n>>k>>s;
        long long int odd[n];
        for(int i=0; i<n; i++){
            odd[i] = 2*i+1;
        }
        long long int sumodd = 0;
        for(int i=0; i<n; i++){
            sumodd+=odd[i];
        }
        cout<<(s-sumodd)/(k-1)<<endl;
    }
    fastio()
    return 0;
}