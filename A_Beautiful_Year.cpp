#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int cntdigits(int n){
    int cnt=0;
    while(n>0){
        cnt++;
        n=n/10;
    }
    return cnt;
}

int cntdistinctdig(int n){
    set<int> st;
    while(n>0){
        int dig = n%10;
        st.insert(dig);
        n=n/10;
    }
    return st.size();
}

int32_t main()
{
    int n;
    cin>>n;
    n=n+1;
    while(cntdigits(n)!=cntdistinctdig(n)){
        n=n+1;
    }
    cout<<n<<endl;
    fastio()
    return 0;
}