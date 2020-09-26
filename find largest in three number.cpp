// Find the largest in given three numbers
#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter three numbers to find largest: ";
	cin>>a>>b>>c;
	
	if(a>=b && a>=c)
		cout<<a<<" is Largest!";
	else if(b>=c)
		cout<<b<<" is Largest!";
	else
		cout<<c<<" is Largest!";
	return 0;
}
