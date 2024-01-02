#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);



int32_t main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];
    int sum=0;
    for(int i=0; i<5; i++){
        sum+=*(ptr+i);
    }
    cout<<sum<<endl;
    fastio()
    return 0;
}