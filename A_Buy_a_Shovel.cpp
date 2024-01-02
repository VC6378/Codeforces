#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int lastDigit(int n){
    int remainder = n%10;
    return remainder;
}

int32_t main()
{
    int k,r;
    cin>>k>>r;
    int cnt = 1;
    int lstdt = lastDigit(k);
    for(int i=1; i<=10; i++){
        int num = lstdt*i;
        if((lastDigit(num)==r) || (lastDigit(num)==0)){
            break;
        }
        else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}