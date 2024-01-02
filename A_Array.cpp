#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> neg;
    vector<int> pos;
    vector<int> zero;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            zero.push_back(arr[i]);
        }
    }

    if(pos.size()==0){
        for(int i=0; i<2; i++){
            pos.push_back(neg.back());
            neg.pop_back();
        }
    }

    if(neg.size()%2==0){
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout<<neg.size()<<" ";
    for(int i=0; i<neg.size(); i++){
        cout<<neg[i]<<" ";
    }
    cout<<endl;

    cout<<pos.size()<<" ";
    for(int i=0; i<pos.size();i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl;

    cout<<zero.size()<<" ";
    for(int i=0; i<zero.size(); i++){
        cout<<zero[i]<<" ";
    }
    cout<<endl;

    fastio()
    return 0;
}