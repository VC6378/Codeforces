#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        vector<int> vec;
        int cntodds=0;
        int cntevens=0;
        for(int i=0; i<n; i++){
            int num;
            cin>>num;
            vec.push_back(num);
            if(vec[i]&1){
                cntodds++;
            }
            else{
                cntevens++;
            }
        }
        int mini = min(cntevens,x-1);
        int left = x-mini;
        if(left%2==0){
            left++;
        }
        if(cntodds>=left && left<=x){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    fastio()
    return 0;
}