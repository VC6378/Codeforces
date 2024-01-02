#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long a1,a2,a3,a4;
        long long temp;
        cin>>a1>>a2>>a3>>a4;
        long long bob=a1;
        long long alice=a1;
        long long ans=a1;
        while(a2>0 || a3>0 || a4>0){
        if(bob>alice){
            if(bob>0 && a2>0){
                temp = min(bob,a2);
                bob-=temp;
                alice+=temp;
                a2-=temp;
                ans+=temp;
            }
            else if(alice>0 && a3>0){
                temp = min(alice,a3);
                alice-=temp;
                bob+=temp;
                ans+=temp;
                a3-=temp;
            }
            else if(alice>0 && bob>0 && a4>0){
                temp = min(a4,min(alice,temp));
                ans+=temp;
                alice-=temp;
                bob-=temp;
                a4-=temp;
            }
            else{
                if((a2!=0 || a3!=0 || a4!=0)){
                    ans++;
                }
                break;
            }
        }
        else{
             if(alice>0 && a3>0){
                temp = min(alice,a3);
                alice-=temp;
                bob+=temp;
                ans+=temp;
                a3-=temp;
            }
            else if(bob>0 && a2>0){
                temp = min(bob,a2);
                bob-=temp;
                alice+=temp;
                a2-=temp;
                ans+=temp;
            }
            else if(alice>0 && bob>0 && a4>0){
                temp = min(a4,min(alice,temp));
                ans+=temp;
                alice-=temp;
                bob-=temp;
                a4-=temp;
            }
            else{
                if((a2!=0 || a3!=0 || a4!=0)){
                    ans++;
                }
                break;
            }
        }
        }

        cout<<ans<<endl;
    }
    fastio()
    return 0;
}