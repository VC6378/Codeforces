#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastio()
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        int start = 0;
        int end = n-1;
        while(start<=end){
            if(s[start]==s[end]){
                start++;
                end--;
            }
            else{
                count++;
                start++;
                end--;
            }
        }
        cout<<(count+1)/2<<endl;
    }
    return 0;
}