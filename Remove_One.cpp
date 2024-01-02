#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
   int t;
   cin>>t;
   while(t--){
    long long n,l,sm;
    cin>>n>>l>>sm;
   
    long long s=1,e=n-l;
    bool flag=0;
    while(s<=e){
        long long mid=(s+(e-s)/2);
        long long rt=mid+l;
        long long rsum=(rt*(rt+1))/2;
        long long lsum=(mid-1)*(mid)/2;
        long long sum=rsum-lsum;
        long long diff=sum-sm;
        if((diff==0)||(diff>=mid && diff<=rt)){
            flag=1;
            break;
        }
        else if((diff<0) || (diff<mid)){
            s=mid+1;
        }
        else if(diff>rt || diff>0){
            e=mid-1;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  
}
}