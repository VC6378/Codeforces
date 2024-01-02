#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int countConsecutiveOnes(int arr[]){
    int n = 54;
    int count = 1;
    for(int i=0; i<n; i++){
        if((arr[i]==1) && (arr[i+1]==1)){
            count++;
        }
    }
    return count;
}

int32_t main()
{
    int x,n;
    cin>>x>>n;
    int totalCount=0;
    while(n-->0){
        int arr[54];
        for(int i=0; i<54; i++){
            cin>>arr[i];
        }
        for(int i=0; i<54; i++){
            if(arr[i]==1){
                countConsecutiveOnes(arr);
            }
            if(countConsecutiveOnes(arr)==x){
                totalCount++;
            }
        }
    }
    cout<<totalCount<<endl;

    fastio()
    return 0;
}