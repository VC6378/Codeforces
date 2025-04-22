#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int lastodd=-1;
    int lasteven=-1;
    int cntodd=0;
    int cnteven=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnteven++;
            lasteven=i;
        }
        else
        {
            cntodd++;
            lastodd=i;
        }
    }
    if(cnteven==0 || cntodd==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(cnteven==1){
        cout<<lasteven+1<<endl;
    }
    else if(cntodd==1){
        cout<<lastodd+1<<endl;
    }
    fastio()
    return 0;
}