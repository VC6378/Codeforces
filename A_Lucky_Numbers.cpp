#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int getans(int num){
    int x = num;
    int smallest = INT_MAX;
    while(x!=0){
        smallest=min(smallest,x%10);
        x=x/10;
    }
    int y = num;
    int largest = INT_MIN;
    while(y!=0){
        largest=max(largest,y%10);
        y=y/10;
    }

    return largest-smallest;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int l,r;
        cin>>l>>r;
        int fa;
        if(r-l>=100){
            int maxl = l+100;
            for(int i=l;i<=maxl;i++){
                if(i%100==90) fa=i;
            }
        }
        else{
            int maxi = INT_MIN;
            int maxans = INT_MIN;
            vector<int> v;
            for(int i=l;i<=r;i++){
                v.push_back(i);
            }
            for(int i=0;i<v.size();i++){
                int num = v[i];
                int ans = getans(num);
                if(ans>=maxans){
                    maxans=ans;
                    maxi=num;
                }
                // int maxans = 
                // maxi = max(maxi,ans);
            }
            fa=maxi;
        }

        cout<<fa<<endl;
    }
    fastio()
    return 0;
}