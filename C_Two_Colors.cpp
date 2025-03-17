#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long noOfPlanks,maxColor;
        cin>>noOfPlanks>>maxColor;
        
        vector<long long> color(maxColor);
        for(long long i=0;i<maxColor;i++){
            cin>>color[i];
        }
        vector<long long> planks(noOfPlanks + 1, 0);
        for(long long i=0;i<maxColor;i++){
            planks[color[i]]++;
        }
        vector<long long> total(noOfPlanks+10,0);
        for(long long i=noOfPlanks;i>=1;i--){
            total[i] = total[i+1]+planks[i];
        }
        long long result=0;
        for(long long i=1;i<noOfPlanks;i++){
            long long left = total[i];
            long long right = total[noOfPlanks-i];
            long long common = total[max(i,noOfPlanks-i)];
            result+=left*right-common;
        }
        cout<<result<<endl;
    }
    fastio()
    return 0;
}