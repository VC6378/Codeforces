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
        if(n&1){
            cout<<(-1)<<endl;
        }
        else{
            vector<int> temp;
            for(int i=1; i<=n; i++){
                temp.push_back(i);
            }

            vector<int> hehe=temp;

            for(int i=0; i<n-1; i++){
                swap(hehe[i],hehe[i+1]);
                i++;
            }
            for(int i=0; i<n; i++){
                cout<<hehe[i]<<" ";
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}