#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        if((a<=50)&&(b<=50)&&(c<=50)){
            cout<<"NOTA"<<endl;
        }
        else{
            vector<int>vec;
            if(a>50){
                vec.push_back(a);
            }
            if(b>50){
                vec.push_back(b);
            }
            if(c>50){
                vec.push_back(c);
            }
            sort(vec.begin(),vec.end());
            int final = vec[vec.size()-1];
            if(final==a){
                cout<<"A"<<endl;
            }
            else if(final==b){
                cout<<"B"<<endl;
            }
            else{
                cout<<"C"<<endl;
            }
        }
    }
    fastio()
    return 0;
}