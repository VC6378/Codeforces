#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    // int p1,p2,p3,p4;
    // cin>>p1>>p2>>p3>>p4;
    int arr[4];
    int count = 0;
    for(int i=0; i<4; i++){
        cin>>arr[i];
        if(arr[i]>=10){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}