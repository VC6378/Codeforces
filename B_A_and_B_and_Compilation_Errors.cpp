#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    // unordered_map<int,int> mp;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
        // mp[a[i]]++;
    }
    vector<int> b;
    for(int i=0; i<n-1; i++){
        int x;
        cin>>x;
        b.push_back(x);
        // mp[b[i]]++;
    }
    vector<int> c;
    for(int i=0; i<n-2; i++){
        int x;
        cin>>x;
        c.push_back(x);
        // mp[c[i]]++;
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    sort(a.begin(),a.end());

    // vector<int> ans;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]){
            // ans.push_back(a[i]);
            cout<<a[i]<<endl;
            break;
        }
    }

    for(int i=0; i<b.size(); i++){
        if(b[i]!=c[i]){
            cout<<b[i]<<endl;
            break;
        }
    }


    fastio()
    return 0;
}