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
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        unordered_map<int,int> mp;
        set<int> st;
        for(int i=0; i<n; i++){
            mp[vec[i]]++;
            st.insert(vec[i]);
            st.insert(vec[i]+1);
        }

        int res=0;
        int last=0;
        for(auto x:st){
            int c = mp[x];
            res += max(0,c-last);
            last=c;
        }
        cout<<res<<endl;
    }
    fastio()
    return 0;
}