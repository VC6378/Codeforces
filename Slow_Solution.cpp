#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int maxT,maxN,sumN;
        cin>>maxT>>maxN>>sumN;
        long long int noofiterations = sumN/maxN;
        long long int remainder = sumN%maxN;
        if(maxT>noofiterations){
            cout<<((noofiterations*(maxN*maxN))+(remainder*remainder))<<endl;
        }
        else{
            cout<<((maxT*(maxN*maxN)))<<endl;
        }

    }
    fastio()
    return 0;
}