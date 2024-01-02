#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        string s = to_string(n);
        string a="";
        string b="";
        for(int i=0; i<s.size(); i++){//last element deleted-a
            if(i==s.size()-1){
                continue;
            }
            else{
                a+=s[i];
            }
        }

        for(int i=0; i<s.size(); i++){//second last element deleted-b
            if(i==s.size()-2){
                continue;
            }
            else{
                b+=s[i];
            }
        }

        int aa = stoi(a);
        int bb = stoi(b);
        // cout<<aa<<endl;
        // cout<<bb<<endl;

        if(aa>bb){
            cout<<aa<<endl;
        }
        else{
            cout<<bb<<endl;
        }
        
    }
    fastio()
    return 0;
}