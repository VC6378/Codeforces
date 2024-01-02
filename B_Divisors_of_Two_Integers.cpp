#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int n;
    cin>>n;
    vector<long long int> d(n);
    for(long long int i=0; i<n; i++){
        cin>>d[i];
    }
    sort(d.begin(),d.end());
    long long int firstNo = d[n-1];
    vector<long long int> divisorOfSecondNum;
    for(long long int i=0; i<n; i++){
        if(firstNo%d[i]!=0){
            divisorOfSecondNum.push_back(d[i]);
        }
    }
    sort(divisorOfSecondNum.begin(),divisorOfSecondNum.end());
    long long int secondNo = divisorOfSecondNum[divisorOfSecondNum.size()-1];
    cout<<firstNo<<" "<<secondNo<<endl;
    fastio()
    return 0;
}