#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int start=0;
        int end=n-1;
        int cnt=0;
        while(start<end){
            if(vec[start]+vec[end]==k){
                cnt++;
                start++;
                end--;
            }
            else if(vec[start]+vec[end]<k){
                start++;
            }
            else{
                end--;
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}