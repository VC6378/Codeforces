#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    int ab,bc,ca;
    cin>>ab>>bc>>ca;
    int a = sqrt((ab*ca)/bc);
    int b = sqrt((ab*bc)/ca);
    int c = sqrt((ca*bc)/ab);
    cout<<(4*(a+b+c))<<endl;
    fastio()
    return 0;
}