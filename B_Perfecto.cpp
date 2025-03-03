#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool check(long long n){
    long long sum = (n*(n+1))/2;
    long long sq = sqrtl(sum);
    if(sq*sq==sum) return true;
    return false;
}

bool ff(long long sum){
    long long sq = sqrtl(sum);
    if (sq * sq == sum)
        return true;
    return false;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        if(n==1){
            cout<<(-1)<<endl;
        }
        else if(check(n)) cout<<(-1)<<endl;
        else{
            vector<long long> p;
            long long sum=0;
            long long i=0;
            while(i<n){
                long long temp = sum+(i+1);
                if(ff(temp)){
                    p.push_back(i+2);
                    p.push_back(i+1);
                    sum+=(i+2);
                    sum+=(i+1);
                    i+=2;
                }
                else{
                    sum+=(i+1);
                    p.push_back(i+1);
                    i++;
                }
            }
            for(long long i=0;i<n;i++){
                cout<<p[i]<<" ";
            }
            cout<<endl;
        }
    }
    fastio()
    return 0;
}