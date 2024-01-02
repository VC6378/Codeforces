#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    long long sum1 = 0;
	    for(int i=0; i<n; i++){
	        sum1+=a[i];
	    }
	    if(sum1 % n != 0){
	        cout<<"Impossible"<<endl;
	    }
	    else{
	        int avg1 = sum1/n;
    	    int count = 0;
    	    for(int i=0; i<n; i++){
    	        if(a[i] == avg1){
    	            cout<<i+1<<endl;
    	            count++;
    	            break;
    	        }
	    }
	    if(count == 0){
	        cout<<"Impossible"<<endl;
	    }
	    }
	}
	return 0;
}
