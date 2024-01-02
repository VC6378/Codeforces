#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        vector<int> vec;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
                vec.push_back(arr[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        int c=0;
        int g=0;
        int si = vec.size();
        
        for(int i=si-1; i>=0; i-=2){
            c+=vec[i];
            g+=vec[i-1];
        }
        

        if(c==g){
            cout<<"Draw"<<endl;
        }
        else if(c>g){
            cout<<"Cyborg"<<endl;
        }
        else{
            cout<<"Geno"<<endl;
        }
        
    }
    fastio()
    return 0;
}