#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<int> v;
int n = 1000000;
void prime(){
    vector<bool> isPrime(n+1,1);
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<n; i++){
        if(isPrime[i]==true){
            for(int j=2*i; j<n; j++){
                isPrime[j]=false;
            }
        }
    }

    for(int i=1; i<n; i++){
        if(isPrime[i]){
            v.push_back(i);
        }
    }
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int d;
        cin>>d;
        int ans=1,j=-1;
        for(int i=0; i<v.size(); i++){
            if(v[i]-1>=d){
                ans*=v[i];
                j=v[i];
                break;
            }
        }
        for(int i=0; i<v.size(); i++){
            if(v[i]-j>=d){
                ans+=v[i];
                j=v[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    fastio()
    return 0;
}