#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m,k;
        cin>>n>>m>>k;
        int cp = n/k;
        if(cp>m){
            cout<<m<<endl;
        }
        else{
            int firstp = cp;
            m = m-cp;
            k = k-1;
            int largest = (m+k-1)/k;
            cout<<firstp-largest<<endl;
        }
    }
    fastio()
    return 0;
}