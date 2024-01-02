#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int q;
    cin>>q;
    while(q-->0){
        int n,m;
        cin>>n>>m;
        vector<int> digits(10);
        for(int i=0; i<10; i++){
            digits[i]=((i+1)*m)%10;
        }

        int sum=0;
        for(int i=0; i<10; i++){
            sum+=digits[i];
        }
        int ans = sum*m;
    }
    fastio()
    return 0;
}