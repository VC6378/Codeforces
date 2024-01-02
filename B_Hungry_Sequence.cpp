#include <bits/stdc++.h>
using namespace std;
 
void generatePrime(int n)
{
    int X = 0, i = 2;
    bool flag;
    while(X < n){
        flag = true;
        for(int j = 2; j <= sqrt(i); j++){
            if (i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << i << " ";
            X++;
        }
        i++;
    }
    cout << endl;
}
 
int main()
{
    int n;
    cin>>n;
    generatePrime(n);
    return 0;
}