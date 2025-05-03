#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int first = INT_MAX;
        int second = INT_MAX;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(first>second){
                swap(first,second);
            }
            if(a[i]<=first){
                first = a[i];
            }
            else if(a[i]<=second){
                second = a[i];
            }
            else{
                first = a[i];
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}