#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    char arr[10];
    cin>>arr;
    long long int digits = strlen(arr);
    long long int ans=0;
    ans = (1<<digits)-2;
    for(int i=digits-1, count=0; i>=0; i--,count++){
        if(arr[i]=='7'){
            ans+=(1<<count);
        }
    }
    cout<<ans+1<<endl;
    fastio()
    return 0;
}