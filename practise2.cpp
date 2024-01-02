#include<bits/stdc++.h>
using namespace std;
int main()
{
    int amount;
    cin>>amount;

    int rs100,rs50,rs20,rs10;
    switch(1){
        case 1:{ rs100 = amount/100;
        amount = amount%100;
        cout<<"Rs100 notes: "<<rs100<<endl;}

        case 2: {rs50 = amount/50;
        amount = amount%50;
        cout<<"Rs50 notes: "<<rs50<<endl;}

        case 3: {rs20 = amount/20;
        amount = amount%20;
        cout<<"Rs20 notes: "<<rs20<<endl;}

        case 4: {rs10 = amount/10;
        amount = amount%10;
        cout<<"Rs10 notes: "<<rs10<<endl;}

    }
 

return 0;
}