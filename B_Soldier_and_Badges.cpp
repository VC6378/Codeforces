#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int cnt=0;
    for(int i=0; i<n-1; i++){
        if(vec[i]==vec[i+1]){
            cnt++;
            vec[i+1]++;
        }
        sort(vec.begin(),vec.end());
    }
    cout<<cnt<<endl;
    fastio()
    return 0;
}