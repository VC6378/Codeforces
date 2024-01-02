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
        int arr[n];
        int f,s,t;
        vector<int> odds;
        vector<int> evens;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]&1){
                odds.push_back(i);
            }
            else{
                evens.push_back(i);
            }
        }
        bool flag;
        if(odds.size()>=3){
            flag=true;
            f=odds[0]+1;
            s=odds[1]+1;
            t=odds[2]+1;
        }
        else{
            if(odds.size()==0){
                flag=false;
            }
            if(odds.size()>0){
                if(evens.size()<2){
                    flag=false;
                }
                else{
                    flag=true;
                    f=evens[0]+1;
                    s=evens[1]+1;
                    t=odds[0]+1;
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
            cout<<f<<" "<<s<<" "<<t<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    fastio()
    return 0;
}