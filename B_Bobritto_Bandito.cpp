#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int left = 0;
        int right = 0;
        int cnt=0;
        for(int i=0;i<m;i++){
            if(left>l){
                left--;
                cnt++;
            }
            else break;
        }
        int leftm = m-cnt;
        for(int i=0;i<leftm;i++){
            if(right<r){
                right++;
            }
            else break;
        }
        cout<<left<<" "<<right<<endl;

    }
    fastio()
    return 0;
}