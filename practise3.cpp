#include<bits/stdc++.h>
using namespace std;

int calculateTerm(int n){
    return (3*n +7);
}

int main()
{
 int n;
 cout<<"Enter the value of n"<<endl;
 cin>>n;
 cout<<calculateTerm(n)<<endl;

return 0;
}