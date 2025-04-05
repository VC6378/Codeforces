#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<long long> vec(n);
        for(long long i=0;i<n;i++){
            cin>>vec[i];
        }
        vector<long long> temp;
        long long sum = accumulate(vec.begin(), vec.end(), 0LL);
        while(n>1){
            for(long long i=0;i<n-1;i++){
                temp.push_back(vec[i+1]-vec[i]);
            }
            sum = max(sum, abs(accumulate(temp.begin(), temp.end(), 0LL)));
            for(long long i=0;i<n-1;i++){
                vec[i]=temp[i];
            }
            temp.clear();
            n--;
        }
        cout<<sum<<endl;
    }
    fastio()
    return 0;
}