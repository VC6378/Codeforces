#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> vec(n);
        int ind=0;
        for(int i=1;i<=n;i+=2){
            for(int j=i;j<=n;j*=2){
                vec[ind]=j;
                ind++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}