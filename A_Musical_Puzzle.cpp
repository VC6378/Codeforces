#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<string> st;
        for(int i=0;i<n-1;i++){
            string temp=to_string(s[i]);
            temp+=to_string(s[i+1]);
            st.insert(temp);
        }
        cout<<st.size()<<endl;
    }

return 0;
}