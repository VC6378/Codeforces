#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n,num,i,num1=0;
    cin>>n;
    vector<int> vec;
    for(i=1; i<=n*n; i++){
        vec.push_back(i);
    }
    num=0;
    num1=n;
    while(num1-->0){
        for(i=num; i<num+n/2; ++i){
            cout<<vec[i]<<" ";
        }
        for(i=vec.size()-num-1; i>=vec.size()-num-n/2; --i){
            cout<<vec[i]<<" ";
        }
        num+=n/2;
        cout<<endl;
    }
    fastio()
    return 0;
}