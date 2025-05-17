#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long> vec(n);
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }
        long long pos = -1;
        for(long long i=0;i<n;i++){
            if(s[i]=='0'){
                pos = i;
                vec[i] = -1e13;
            }
        }

        long long mx = 0;
        long long curr = 0;
        for(long long i=0;i<n;i++){
            curr = max(curr+vec[i], vec[i]);
            mx = max(mx, curr);
        }

        bool flag = true;
        if(mx>k or (mx!=k and pos==-1)){
            flag = false;
        }

        if(!flag){
            cout<<"NO"<<endl;
        }
        else{
            mx=0;
            curr=0;
            long long left,right;
            for(long long i=pos+1;i<n;i++){
                curr+=vec[i];
                mx = max(mx, curr);
            }

            left = mx;
            mx = 0;
            curr = 0;
            for(long long i=pos-1;i>=0;i--){
                curr+=vec[i];
                mx = max(mx, curr);
            }
            right = mx;

            vec[pos] = k-left-right;
            cout<<"YES"<<endl;
            for(long long i=0;i<n;i++){
                cout << vec[i] << " \n"[i + 1 == n];
            }
        }
    }
    fastio()
    return 0;
}