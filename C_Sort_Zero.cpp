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
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int last=-1;
        for(int i=n-2;i>=0;i--){
            if(vec[i]>vec[i+1]){
                last=i;
                break;
            }
        }

        set<int> st;
        for(int i=0;i<=last;i++){
            st.insert(vec[i]);
        }

        int latest=-1;

        for(int i=last+1;i<n;i++){
            if(st.find(vec[i])!=st.end()){
                latest=i;
            }
        }

        for(int i=last+1;i<=latest;i++){
            st.insert(vec[i]);
        }

        cout<<st.size()<<endl;
    }
    fastio()
    return 0;
}