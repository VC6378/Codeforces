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
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0; i<n;){
            if(i==n-1){
                i++;
            }
            else if(cnt%2==0){
                if(s[i]=='1'){
                    bool found=false;
                    while(i+1<n && s[i]>=s[i+1]){
                        if(i+1<n && s[i]=='1'&& s[i+1]=='0'){
                            found=true;
                        }
                        i++;
                    }
                    if(found) cnt++;
                }
                else i++;
            }
            else if(cnt%2!=0){
                if(i+1<n && s[i]=='0'&&s[i+1]=='1'){
                    cnt++;
                }
                i++;
            }
        }
        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}