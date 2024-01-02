#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,f;
        cin>>n>>f;
        int arr[f];
        int sum = 0;
        for(int i=0; i<f; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int tearPage;
        cin>>tearPage;
        int totalPage = (n+1)/2;
        int sumPage = (n*(n+1))/2;
        int totalSum = sumPage-sum;
        double finalAns = ((totalPage-tearPage)*1.0 /totalPage )*totalSum;
        cout<<fixed<<setprecision(4)<<finalAns<<endl;

    }
    fastio()
    return 0;
}