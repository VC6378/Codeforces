#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int s1=0,s2=0,s3=0;
        for(int i=0; i<n; i++){
            s1+=a[i];
            s2+=b[i];
            if((s1==s2) && (a[i]==b[i])){
                s3+=a[i];
            }
        }

        cout<<s3<<endl;
    }
    fastio()
    return 0;
}