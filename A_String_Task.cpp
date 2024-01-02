#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    string s;
    cin>>s;
    string fake="";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='o'||s[i]=='O'||s[i]=='i'||s[i]=='I'||s[i]=='u'||s[i]=='U'||s[i]=='y'||s[i]=='Y'){
            continue;
        }
        else if(isupper(s[i])){
            fake.push_back('.');
            fake.push_back(tolower(s[i]));
        }
        else{
            fake.push_back('.');
            fake.push_back(s[i]);
        }
    }

    cout<<fake<<endl;
    fastio()
    return 0;
}