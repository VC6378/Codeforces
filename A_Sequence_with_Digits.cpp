#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

long long getAns(long long x){
    long long m1=10;
    long long m2=0;
    while(x>0){
        long long y = x%10;
        m1 = min(m1,y);
        m2 = max(m2,y);
        x=x/10;
    }
    return m1*m2;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long a,k;
        cin>>a>>k;
        k--;
        while(k-->0){
            long long y = getAns(a);
            if(y==0){
                break;
            }
            a += y;
        }

        cout<<a<<endl;
    }
    fastio()
    return 0;
}