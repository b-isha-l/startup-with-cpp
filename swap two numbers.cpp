// write a program to swap two numbers
#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Before swapped:"<<endl;
	cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
	c = a;
	a = b;
	b = c;
	cout<<"After swapped:"<<endl;
	cout<<"a = "<<a<<" "<<"b = "<<b;
	return 0;
}
