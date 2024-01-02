#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
            cin>>a[i][j];}
        }
        int tt=0;
        tt+=a[0][0]+a[0][1];
        for(int i=1;i<n;i++){
           
            if(a[i][0]>=tt){
                tt=a[i][0]+a[i][1];
            }
            else if(a[i][0]<tt){
                double n=(tt-a[i][0])/(double)a[i][2];
                if(n!=(int)n) n=(int)n+1;
                tt+=a[i][0]+n*(a[i][2])-tt+a[i][1];
            }
        }
        cout<<tt<<endl;
        
    }
	// your code goes here
	return 0;
}