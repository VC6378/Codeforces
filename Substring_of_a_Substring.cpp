#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        vector<int> vec;
        // vec[0] = 0;
        vec.push_back(0);
        for(int i=1; i<s.size()-1; i++){
            if(s[i]==s[0] || s[i]==s[s.size()-1]){
                vec.push_back(0);
            }
            else{
                vec.push_back(1);
            }
        }
        vec.push_back(0);
        int cnt = 0;
        int mxx = 0;

        for(int i=0; i<vec.size(); i++){
            if(vec[i]!=0){
                cnt++;
            }
            else{
                cnt = 0;
            }
            mxx = max(cnt,mxx);
        }

        if(mxx>0){
            cout<<mxx<<endl;
        }
        else{
            cout<<(-1)<<endl;
        }
    }
    fastio()
    return 0;
}