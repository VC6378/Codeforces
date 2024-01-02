#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int sumDigits(int num){
    int sum = 0;
    while(num>0){
        int remainder = num%10;
        sum+=remainder;
        num = num/10;
    }

    return sum;
}

int32_t main()
{
    
    int t;
    cin>>t;
    while(t-->0){
        int max = -1;
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int k = a[i]*a[j];
                // sumDigits(k);
                if(sumDigits(k)>max){
                    max = sumDigits(k);
                }
            }
        }
        cout<<max<<endl;
    }

    fastio()
    return 0;
}