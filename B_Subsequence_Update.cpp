#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int sum=0;
        if(l==r){
            cout<<vec[l-1]<<endl;
            continue;
        }
        int num=r-l+1;
        for(int i=0;i<num;i++){
            sum+=vec[i];
        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}