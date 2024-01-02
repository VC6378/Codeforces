#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long int t;
    cin>>t;
    while(t-->0){
        long long int mg,my,mr;
        long long int og,oy,orr;
        long long int pg,py,pr;

        cin>>mg>>my>>mr;
        cin>>og>>oy>>orr;
        cin>>pg>>py>>pr;

        vector<long long int> maxx;
        long long int red = mr+orr+pr;
        maxx.push_back(red);
        long long int yellow = my+oy+py;
        maxx.push_back(yellow);
        long long int green = mg+og+pg;
        maxx.push_back(green);

        long long int mtree = mg+my+mr;
        maxx.push_back(mtree);
        long long int otree = og+oy+orr;
        maxx.push_back(otree);
        long long int ptree = pg+py+pr;
        maxx.push_back(ptree);

        sort(maxx.begin(),maxx.end());
        
        long long int ans = maxx[maxx.size()-1];
        if(ans>0&&ans%2==0){
            ans--;
        }
        cout<<ans<<endl;
        
    }
    fastio()
    return 0;
}