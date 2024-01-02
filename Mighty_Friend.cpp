#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int msum=0;
        vector<int> mm;
        int tsum = 0;
        vector<int> tt;

        for(int i=0; i<n; i++){
            if(i%2==0){
                mm.push_back(arr[i]);
                msum+=arr[i];
            }
            else{
                tt.push_back(arr[i]);
                tsum+=arr[i];
            }
        }

        if(tsum>msum){
            cout<<"YES"<<endl;
            continue;
        }

        int msize = mm.size();
        int tsize = tt.size();

        sort(mm.begin(),mm.end(),greater<int>());
        sort(tt.begin(),tt.end());

        if(k>tsize){
            tsize = k;
        }

        for(int i=0; i<k; i++){
            if(mm[i]>tt[i]){
                tsum -= tt[i];
                tsum += mm[i];
                msum -= mm[i];
                msum += tt[i];
            }
            else{
                break;
            }

        }

        if(tsum>msum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    fastio()
    return 0;
}