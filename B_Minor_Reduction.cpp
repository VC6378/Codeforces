#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int x;
        cin>>x;
        int tempwork = x;
        int temp2=x;
        vector<int> digits;
        while(tempwork!=0){
            int remain=tempwork%10;
            digits.push_back(remain);
            tempwork=tempwork/10;
        }
        reverse(digits.begin(),digits.end());
        
    }
    fastio()
    return 0;
}