#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int solution(vector<int> &a,int xx,int yy){
    int n=a.size();
    int finalans=INT_MAX;
    for(int i=0;i+(xx-1)*yy<n;i++){
        int summation=0;
        for(int j=i;j<=i+(xx-1)*yy;j+=yy){
            summation+=a[j];
        }
        finalans=min(summation,finalans);
    }
    return finalans;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){
            int d,s;
            cin>>d>>s;
            vec.push_back({d,s});
        }
        int ans=INT_MAX;
        for(auto it:vec){
            int temp=(it.second-1)/2;
            ans=min(ans,temp+it.first);
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}