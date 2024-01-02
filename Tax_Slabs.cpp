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
        int de = 0;
        if(n<=250000){
            de+=0;
        }
        if(n>500000){
            de+=12500;
        }
        else if(n>250000&&n<=500000){
            de+=((n-250000)*5)/100;
        }
        if(n>750000){
            de+=25000;
        }
        else if(n>500000&&n<=750000){
            de+=((n-500000)*10)/100;
        }
        if(n>1000000){
            de+=37500;
        }
        else if(n>750000&&n<=1000000){
            de+=((n-750000)*15)/100;
        }
        if(n>1250000){
            de+=50000;
        }
        else if(n>1000000&&n<=1250000){
            de+=((n-1000000)*20)/100;
        }
        if(n>1500000){
            de+=62500;
            de+=((n-1500000)*30)/100;
        }
        else if(n>1250000&&n<=1500000){
            de+=((n-1250000)*25)/100;
        }

        cout<<n-de<<endl;
    }
    fastio()
    return 0;
}