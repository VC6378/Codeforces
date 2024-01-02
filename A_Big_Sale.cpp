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
        double cnt = 0;
        while(n-->0){
            double p,q,d;
            cin>>p>>q>>d;
            double raise = p+((d*p)/100);
            double finalp = (raise - ((raise*d)/100));
            double ml = p-finalp;
            cnt+=(ml*q);
        }
        cout<<setprecision(15);
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}