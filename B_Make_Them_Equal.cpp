#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }

    int ans;
    if(st.size() > 3){
        ans=-1;
    }
    else if(st.size()==3){
        int first = *st.begin();
        st.erase(first);
        int second = *st.begin();
        st.erase(second);
        int third = *st.begin();
        st.erase(third);
        if(abs(first-second)==abs(second-third)){
            ans = abs(first-second);
        }
        else{
            ans=-1;
        }
    }
    else if(st.size()==2){
        int first = *st.begin();
        st.erase(first);
        int second = *st.begin();
        st.erase(second);

        if(abs(first-second)%2==0){
            ans = abs(first-second)/2;
        }
        else{
            ans=abs(first-second);
        }
    }
    else if(st.size()==1){
        ans=0;
    }

    cout<<ans<<endl;
    fastio()
    return 0;
}