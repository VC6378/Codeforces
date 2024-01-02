#include <iostream>
#include<algorithm>
 
using namespace std;
 
#define N 101
 
char s[N];
 
int main()
{
    int T;
    scanf("%d",&T);
    int n,m;
    int OddG,OddR,EvenG,EvenR;
    int ans;
    while(T--)
    {
        OddG=OddR=EvenG=EvenR=0;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;++i)
        {
            scanf("%s",s+1);
            for(int j=1;j<=m;++j)
            {
                if(s[j]=='G') 
                {
                    if((i+j)&1) OddG++;
                    else EvenG++;
                }
                else
                {
                    if((i+j)&1) OddR++;
                    else EvenR++;
                }
            }
        }
        ans=5*OddR+3*EvenG;
        ans=min(ans,3*OddG+5*EvenR);
        printf("%d\n",ans);
    }
}
