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
        string s;
        cin>>s;
        s = "0"+s;
        long long flips = 0;
        for(long long i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                flips++;
            }
        }
        if(flips>=3){
            cout<<flips-2+n<<endl;
        }
        else if(flips==2){
            cout<<flips-1+n<<endl;
        }
        else{
            cout<<flips+n<<endl;
        }
    }
    fastio()
    return 0;
}