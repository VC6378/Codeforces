#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
        string s;
        set<char> x,y;
        for(int i=0; i<n; i++){
            cin>>s;
            for(int j=0; j<n; j++){
                if(i==j || i+j==n-1){
                    x.insert(s[j]);
                }
                else{
                    y.insert(s[j]);
                }
            }
        }

        if(x.size() == 1 && y.size()==1 && *x.begin()!=*y.begin()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    fastio()
    return 0;
}