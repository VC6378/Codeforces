#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
       long long int maxx=0;
        long long int b = 0;
        string s;
        cin>>s;
        long long int size = s.size();
        for(int i=0; i<size; i++){
            if(s[i] == '('){
                b++;
            }
            else if(s[i] == ')'){
                b--;
            }
            maxx = max(maxx,b);
        }

        for(int i=0; i<maxx; i++){
            cout<<'(';
        }
        for(int i=0; i<maxx; i++){
            cout<<')';
        }

        cout<<endl;
    }
    fastio()
    return 0;
}