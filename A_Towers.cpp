#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int maxFreq=-1;
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    for(auto x:mp){
        if(x.second>maxFreq){
            maxFreq=x.second;
        }
    }
    cout<<maxFreq<<" "<<st.size()<<endl;
    fastio()
    return 0;
}