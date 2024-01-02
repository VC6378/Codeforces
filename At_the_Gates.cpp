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
        vector<char>vec(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        for(int i=0; i<k; i++){
            if(vec[n-1]=='H'){
                for(int i=0; i<n; i++){
                    if(vec[i]=='H'){
                        vec[i]='T';
                    }
                    else{
                        vec[i]='H';
                    }
                }
                vec.pop_back();
                n = n-1;
            }
            else{
                vec.pop_back();
                n = n-1;
            }
        }

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(vec[i]=='H'){
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    fastio()
    return 0;
}