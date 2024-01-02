#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(long long int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int cnt=0;
    bool zeropresent=false;
    long long int product=1;
    for(long long int i=0; i<n; i++){
        if(arr[i]<0){
            product=product*(-1);
            cnt+=abs(arr[i]+1); 

        }
        else if(arr[i]==0){
            product=product*(1);
            zeropresent=true;
            cnt+=1;
        }
        else{
            product = product*(1);
            cnt+=abs(arr[i]-1);
        }
    }

    if(product<0 && zeropresent){
        cnt=cnt;
    }
    else if(product<0 && !zeropresent){
        cnt+=2;
    }
    
    cout<<cnt<<endl;
    fastio()
    return 0;
}