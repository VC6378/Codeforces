#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n,q;
        cin>>n>>q;
        long long int count = 0;
        long long int current = 0;
        while(q-->0){
            long long int f,d;
            cin>>f>>d;
            count+=abs(d-f)+abs(f-current);
            current = d;
        }
        cout<<count<<endl;
    }
    fastio()
    return 0;
}