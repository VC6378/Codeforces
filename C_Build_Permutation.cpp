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
        int maxi=2*(n-1);
        vector<int> square;
        for(int i=0;i*i<=maxi;i++){
            square.push_back(i*i);
        }
        int ind=square.size()-1;
        set<int> st;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            int left=square[ind]-i;
            while(left>=n || st.find(left)!=st.end()){
                ind--;
                left=square[ind]-i;
            }
            ans[left]=i;
            st.insert(left);
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    fastio()
    return 0;
}