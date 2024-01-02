#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int n;
    cin>>n;
    while(n-->0){
        string y;
        cin>>y;
        vector<int> digits;
        for(int i=0; i<y.size(); i++){
            char ch = y[i];
            int num = int(ch)-48;
            digits.push_back(num);
        }
        bool div3=false;
        bool div5=false;
        bool div4=false;
        int sum=0;
        int cntzeros = 0;
        for(int i=0; i<digits.size(); i++){
            if(digits[i]==0){
                cntzeros++;
                div5=true;
            }

            sum+=digits[i];
        }
        if(sum%3==0){
            div3=true;
        }

        for(int i=0; i<digits.size(); i++){
            if(cntzeros==1){
                if(digits[i]*10%4==0 && digits[i]!=0){
                    div4=true;
                }
            }
            else{
                if(digits[i]*10%4==0){
                    div4=true;
                }
            }
        }

        if(div3&&div4&&div5){
            cout<<"red"<<endl;
        }
        else{
            cout<<"cyan"<<endl;
        }

    }
    fastio()
    return 0;
}