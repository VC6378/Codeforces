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
        int start = 0;
        int end = n-1;
        int cnt = 0;
        while(start<=end){
            if(s[start]!=s[end]){
                cnt++;
            }
            start++;
            end--;
        }
        if(cnt>k){
            cout<<"NO"<<endl;
        }
        else if(n%2==0 || (k-cnt)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}