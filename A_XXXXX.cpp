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
        vector<int> v(n);
        int sum = 0;
        int divi=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%x==0){
                divi++;
            }
        }


        if(divi==n){
            cout<<(-1)<<endl;
        }
        else if(sum%x!=0){
            cout<<(n)<<endl;
        }
        else if(sum%x==0){
            int mini = 0;
            int total = sum;
            for(int i=0; i<n; i++){
                total-=v[i];
                if(total%x!=0){
                    mini = max(mini,n-i-1);
                    break;
                }
            }

            total = sum;
            for(int i=n-1; i>=0; i--){
                total-=v[i];
                if(total%x!=0){
                    mini = max(mini,i);
                    break;
                }
            }

            cout<<mini<<endl;
        } 

    }
    fastio()
    return 0;
}