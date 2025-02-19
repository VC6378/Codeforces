#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    set<string> st;
    do{
        st.insert(s);
    }
    while(next_permutation(s.begin(),s.end()));
    cout<<st.size()<<endl;
    for(auto it:st){
        cout<<it<<endl;
    }
    fastio()
    return 0;
}