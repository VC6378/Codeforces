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
        vector<string> dir(n);
        vector<string> st(n);
        for(int i=0; i<n; i++){
             string s1,s2;
            cin>>s1;
            getline(cin,s2);
            dir[i] = s1;
            st[i] = s2;
        }

        for(int i=0; i<n; i++){
            if(i==0){
                cout<<"Begin";
            }
            else if(dir[n-i]=="Right"){
                cout<<"Left";
            }
            else{
                cout<<"Right";
            }

            cout<<st[n-i-1]<<endl;
        }
    }
    fastio()
    return 0;
}