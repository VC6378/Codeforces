#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<long long,long long> mp;
        for(long long i=0;i<n;i++){
            mp[a[i]]++;
        }
        vector<long long> len(n);
        len[0] = mp[a[0]]==1;
        for(long long i=1;i<n;i++){
            if(mp[a[i]]==1){
                len[i]=len[i-1]+1;
            }
        }

        long long maxi = *max_element(len.begin(),len.end());
        if(maxi==0){
            cout<<0<<endl;
            continue;
        }
        else{
            long long left, right;
            for (long long i = 0; i < n; i++)
            {
                if (len[i] == maxi)
                {
                    left = i - len[i] + 1;
                    right = i + 1;
                    break;
                }
            }
            cout<<left+1<<" "<<right<<endl;
        }

    }
    fastio()
    return 0;
}