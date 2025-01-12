#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool hehe(vector<long long> &aaa,vector<long long> &bbb){
    long long n = aaa.size();
    long long gain=0;
    long long loss=0;
    long long gaincnt=0;
    for(int i=0;i<n;i++){
        if(aaa[i]<bbb[i] && abs(aaa[i]-bbb[i])>gain){
            gain = abs(aaa[i]-bbb[i]);
            gaincnt = i;
        }
    }



    for(int i=0;i<n;i++){
        if(i!=gaincnt && aaa[i]-gain<bbb[i]){
            return false;
        }
    }
    return true;
}

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> b(n);
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }

        if(hehe(a,b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}