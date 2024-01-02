#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int s = 0;
    int t;
    cin>>t;
    while(t-->0){
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        float a,b,c;
        a = pow(x1-x2,2)+pow(y1-y2,2);
        b = pow(x1-x3,2)+pow(y1-y3,2);
        c = pow(x3-x2,2)+pow(y3-y2,2);
        float A[] = {a,b,c};
        sort(A,A+3);
        if(A[2] == A[1]+A[0]){
            s = s+1;
        }
    }
    cout<<s<<endl;
    fastio()
    return 0;
}