#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    long long t;
    cin>>t;
    while(t-->0){
        long long a;
        cin>>a;
        string st = to_string(a);
        bool flag = true;
        long long n = st.size();  
        if(n<3){
            flag = false;
        }
        else{
            for (long long i = 0; i < st.size(); i++)
            {
                if (i == 0)
                {
                    if (st[i] != '1')
                    {
                        flag = false;
                        break;
                    }
                }
                if (i == 1)
                {
                    if (st[i] != '0')
                    {
                        flag = false;
                        break;
                    }
                }

                if (i == 2)
                {
                    if (st[i] == '0')
                    {
                        flag = false;
                        break;
                    }
                }

                if (i == 2 && i == n - 1)
                {
                    if (st[i] == '0' || st[i] == '1')
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    fastio()
    return 0;
}