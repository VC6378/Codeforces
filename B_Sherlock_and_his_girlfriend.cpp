#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int sieve[100005];

int32_t main()
{
    int i, n, j;
	cin>>n;
	for(i=2; i<=n+1; i++)
	{
		if(!sieve[i])
			for(j=2*i; j<=n+1; j+=i)
				sieve[j]=1;
	}
	
	if(n>2)
		cout<<"2\n";
	else
		cout<<"1\n";

	for(i=2; i<=n+1; i++)
	{
		if(!sieve[i])
			cout<<"1 ";
		else
			cout<<"2 ";
	}

	return 0;

}