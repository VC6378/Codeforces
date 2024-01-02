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
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
        }

        vector<int> tempa = a;
        vector<int> tempb = b;
        sort(tempa.begin(),tempa.end());
        sort(tempb.begin(),tempb.end());

        if((a[n-1]==tempa[n-1]) and (b[n-1]==tempb[n-1])){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    fastio()
    return 0;
}