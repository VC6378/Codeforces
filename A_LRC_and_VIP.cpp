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
        bool allSame = true;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] != a[0])
            {
                allSame = false;
                break;
            }
        }

        if(allSame){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int maxind = -1;
            int maxi = INT_MIN;
            for(int i=0;i<n;i++){
                if(a[i]>maxi){
                    maxi = a[i];
                    maxind = i;
                }
            }
            for(int i=0;i<n;i++){
                if(i==maxind){
                    cout<<"2"<<" ";
                }
                else{
                    cout<<"1"<<" ";
                }
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}