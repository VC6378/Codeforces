#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool isFair(long long int n){
    long long int num=n;
    while(num!=0){
        int remainder=num%10;
        if(remainder!=0 && n%remainder!=0){
            return false;
        }
        num=num/10;
    }
    return true;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        while(!isFair(n)){
            n++;
        }
        cout<<n<<endl;
    }
    fastio()
    return 0;
}