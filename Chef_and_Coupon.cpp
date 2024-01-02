#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int t;
    cin>>t;
    while(t-->0){
        int d,c;
        cin>>d>>c;
        int a[3];
        int b[3];
        bool sumaprice = 0;
        bool sumbprice = 0;
        int suma = 0;
        int sumb = 0;
        for(int i=0; i<3; i++){
            cin>>a[i];
        }
        for(int i=0; i<3; i++){
            cin>>b[i];
        }
        
        for(int i=0; i<3; i++){
            suma+=a[i];
        }
        for(int i=0; i<3; i++){
            sumb+=b[i];
        }
        
        if(suma>=150){
            sumaprice = 1;
        }
        if(sumb>=150){
            sumbprice = 1;
        }
        int couponprice=0,deliveryprice=0;
        bool finalans = 0;
        if(sumaprice==1 && sumbprice == 1){
            couponprice = suma+sumb+c;
            deliveryprice = suma+sumb+d+d;
            if(couponprice<deliveryprice){
                finalans = 1;
            }
        }
        if(sumaprice == 1 || sumbprice == 1){
            couponprice = suma+sumb+c+d;
            deliveryprice = suma+sumb+d+d;
            if(couponprice<deliveryprice){
                finalans = 1;
            }
        }
        if(finalans == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}