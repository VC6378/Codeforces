#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;
    int price[n];
    for(int i=0; i<n; i++){
        cin>>price[i];
    }
    int nutrition[n];
    for(int i=0; i<n; i++){
        cin>>nutrition[i];
    }
    vector<pair<int,int>> vp;
    for(int i=0; i<n; i++){
        pair<int,int> p;
        p.first = nutrition[i];
        p.second = price[i];
        vp.push_back(p);
    }

    sort(vp.begin(),vp.end());
    reverse(vp.begin(),vp.end());
    int total = 0;
    int ans;
    for(int i=0; i<n; i++){
        ans=i;
        if(k>0){
            if(vp[i].second/2 <= m){
                total+=vp[i].second;
                m-=vp[i].first;
                k--;
            }
        }
        else{
            break;
        }
    }

    for(int i=ans; i<n; i++){
         if(vp[i].second<=m){
             total+=vp[i].second;
             m-=vp[i].first;
         }
    }

    cout<<total<<endl;
    return 0;
}