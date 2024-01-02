#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pii pair<ll,ll>
#define vi vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vi>
#define vpii vector<pii>
#define ff first
#define ss second
#define mkp make_pair
#define pb emplace_back
using namespace std;
#define ll long long

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
long long M=1000000000+7;
int main(){
int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll>a(n),b(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		unordered_map<ll,ll>m,x;

		for(int i=0;i<n;){
			int j=i;
			ll ct=0;
			while(j<n && a[j]==a[i]){
				j++;
				ct++;
			}
			m[a[i]]=max(m[a[i]],ct);
			i=j;
		}
		
		for(int i=0;i<n;){
			int j=i;
			ll ct=0;
			while(j<n && b[j]==b[i]){
				j++;
				ct++;
			}
			x[b[i]]=max(x[b[i]],ct);
			i=j;
		}

		ll ans=0;

		for(auto i:m){
			int y=i.first;
			// cout<<m[y]<<":"<<x[y]<<":"<<y<<endl;
			ans=max(ans,m[y]+x[y]);
		}
		for(auto i:x){
			int y=i.first;
			ans=max(ans,m[y]+x[y]);
		}
		cout<<ans<<endl;
}
}