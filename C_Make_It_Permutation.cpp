#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,c,d;
        cin>>n>>c>>d;
        vector<long long> vec(n);
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }


        sort(vec.begin(),vec.end());
        unordered_map<long long,long long>mp;
        for(long long i=0;i<n;i++){
            mp[vec[i]]++;
        }


        long long extra=0;
        for(auto x:mp){
            extra=extra+(x.second-1);
        }


        set<long long> st;
        for(long long i=0;i<n;i++){
            st.insert(vec[i]);
        }

        
        vector<long long> temp;
        for(auto x:st){
            temp.push_back(x);
        }


        vector<long long> prefix(temp.size());
        prefix[0]=temp[0]-1;
        for(long long i=1;i<temp.size();i++){
            prefix[i]=(temp[i]-temp[i-1]-1)+(prefix[i-1]);
        }
        

        long long mini = 1e18;
        for(long long i=0;i<temp.size();i++){
            long long cost = (prefix[i]*d)+((prefix.size()-i-1)*c)+(extra*c);
            mini=min(cost,mini);
        }

        mini = min(mini,n*c+d);


        cout<<mini<<endl;

    }
    fastio()
    return 0;
}