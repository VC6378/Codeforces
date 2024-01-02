// C++ program for implementation of Bisection Method for
#include<bits/stdc++.h>
using namespace std;

#define ep 0.01

double func(double x)
{
	return x*x*x - x*x + 2;
}

void bisection(double a, double b,int acc)
{
	if (func(a) * func(b) >= 0)
	{
		cout << "You have not assumed right a and b\n";
		return;
	}

	double c = a;
	while ((b-a) >= ep)
	{
		c = (a+b)/2;
		if (func(c) == 0.0)
			break;

		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	cout << "The value of root is : " <<fixed<<setprecision(acc)<< c;
}

int main()
{
    int acc;
    cout<<"Enter accuracy"<<endl;
    cin>>acc;
	double a = -200, b = 300;
	bisection(a, b,acc);
	return 0;
}