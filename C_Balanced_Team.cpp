#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int j=0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        while(j<n and v[j]-v[i]<=5){
            j++;
            maxi = max(maxi,j-i);
        }
    }
    cout<<maxi<<endl;
    fastio()
    return 0;
}