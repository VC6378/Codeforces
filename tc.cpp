#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    fstream my_file;
    my_file.open("my_file.txt", ios::out);
	char a[2];
	a[0]='0';
	a[1]='1';
	int t = rand()%10000;
	my_file<<to_string(t)<<endl;   
	while(t--){
	    int n = rand()%200000;
	    my_file<<to_string(n)<<endl;
	    string s = "";
	    for(int i=0;i<n-1;i++){
	        s+=a[rand()%2];
	    }
	    my_file<<s<<endl;
	}
	return 0;
}
