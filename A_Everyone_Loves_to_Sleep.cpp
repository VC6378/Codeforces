#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,H,M;
        cin>>n>>H>>M;
        int sleepTime = 60*H+M;
        int finalAns = INT_MAX;
        for(int i=0; i<n; i++){
            int h,m;
            cin>>h>>m;
            int time = 60*h+m-sleepTime;
            if(time<0){
                time += 24*60;
            }
            finalAns = min(finalAns,time);
        }
        cout<<finalAns/60<<" "<<finalAns%60<<endl;
    }
    fastio()
    return 0;
}