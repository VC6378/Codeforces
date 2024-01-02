#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> count(n);
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    count[0]=vec[0];
    for(int i=1; i<n; i++){
        count[i]=count[i-1]+vec[i];
    }
    vector<int> worms(sum+1);
    int ind=0;
    for(int i=1; i<=sum; i++){
        if(i>count[ind]){
            ind++;
        }
        worms[i]=ind+1;
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int t;
        cin>>t;
        cout<<worms[t]<<endl;
    }
    fastio()
    return 0;
}