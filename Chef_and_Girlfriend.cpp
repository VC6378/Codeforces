#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string t1,t2;
        int d;
        cin>>t1;
        cin>>t2;
        cin>>d;
        double time = ((10*double(t1[0])+double(t1[1]))-(10*double(t2[0])+double(t2[1])))*60 + ((10*double(t1[3])+double(t1[4])) - (10*double(t2[3])+double(t2[4])));

        float result1 = d+time;
        float result2;
        if(time>=2*d){
            result2 = time;
        }
        else{
            result2 = (time+2*d)/2;
        }

        cout<<setprecision(1)<<fixed;
        cout<<result1<<" "<<result2<<endl;
    }
    fastio()
    return 0;
}