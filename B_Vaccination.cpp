#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        vector<int> t(n);
        for(int i=0; i<n; i++){
            cin>>t[i];
        }
        vector<int> temp(n);
        for(int i=0; i<n; i++){
            temp[i]=t[i]+w;
        }
        int tempk=k;
        int cnt=0;
        for(int i=0; i<n; i++){
            int start = temp[0];
            cnt++;
            while(k>0){
                if(t[i]<=start){
                    k--;
                }
                else{
                    cnt++;
                }
            }
            if(k==0){
                k=tempk;
                start = temp[i]+d;
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}