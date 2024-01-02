#include <bits/stdc++.h>
using namespace std;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin >> t;
    while (t-- > 0)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long maxi = INT_MIN;
        long long neg=0;
        long long pos=0;
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]<0){
                neg++;
            }
            else{
                pos++;
            }
            // maxi = max(maxi,v[i]);
        }
        
        long long ans=1;
        if(n==5 or pos==0){
            sort(v.begin(),v.end());
            for(long long i=n-1; i>n-1-5; i--){
                ans=ans*v[i];
            }
        }
        else{
            long long hehe=INT_MIN;
            sort(v.begin(),v.end());
            long long temp;
            if(neg>=4){
                temp=v[n-1];
                for(long long i=0; i<4; i++){
                    temp=temp*v[i];
                }
                hehe=max(hehe,temp);
            }
            if(neg>=2 and pos>=3){
                temp = v[n-1]*v[n-2]*v[n-3];
                for(long long i=0; i<2; i++){
                    temp=temp*v[i];
                }
                hehe=max(temp,hehe);
            }
            if(pos>=5){
                hehe = max(hehe,v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5]);
            }

            ans=hehe;
        }

        cout<<ans<<endl;

    }
    fastio() return 0;
}