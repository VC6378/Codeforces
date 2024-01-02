#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<int> odds;
        vector<int> evens;
        for(int i=0; i<n; i++){
            if(arr[i]&1){
                odds.push_back(arr[i]);
            }
            else{
                evens.push_back(arr[i]);
            }
        }

        vector<int> sortedOdds = odds;
        vector<int> sortedEvens = evens;
        sort(sortedOdds.begin(),sortedOdds.end());
        sort(sortedEvens.begin(),sortedEvens.end());

        bool flag = true;
        for(int i=0; i<odds.size(); i++){
            if(odds[i]!=sortedOdds[i]){
                flag=false;
                break;
            }
        }

        for(int i=0; i<evens.size(); i++){
            if(evens[i]!=sortedEvens[i]){
                flag=false;
                break;
            }
        }

        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    fastio()
    return 0;
}