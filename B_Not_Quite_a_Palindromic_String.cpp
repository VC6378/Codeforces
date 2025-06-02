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
        string s;
        cin>>s;
        vector<int> freq(2,0);
        for(int i=0;i<n;i++){
            freq[s[i]-'0']++;   
        }
        int extra = max(freq[0], freq[1])-n/2;
        int total = freq[0]/2+freq[1]/2;
        if(k>=extra && (k-extra)%2==0 && k<=total){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}