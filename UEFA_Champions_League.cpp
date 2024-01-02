#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
       map<string,pair<int,int> > mp;

        //1. having goals awarded
        //2. having goad difference
        int i=0;
        while(i<12){
            string s1,vs,s5;
            int a,b;
            cin>>s1>>a>>vs>>b>>s5;
            mp[s1].second += (a-b);
            mp[s5].second += (b-a);
            if(a>b){
                mp[s1].first+=3;
            }
            else if(b>a){
                mp[s5].first+=3;
            }
            else{
                mp[s1].first+=1;
                mp[s5].first+=1;
            }

            i++;
        }

    map< pair<int,int> ,string> mp2;
    for(auto it: mp){
        mp2[{it.second.first,it.second.second}]=it.first;
    }
    auto it1=mp2.rbegin();
    cout<<(*it1).second<<" ";
    cout<<(*(++it1)).second<<"\n";

    }
    fastio()
    return 0;
}