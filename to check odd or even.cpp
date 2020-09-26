// Write a program to check the number is even or odd
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter an integer: ";
	cin>>a;
	
	if(a%2 == 0)
		cout<<a<<" is even.";
	else
		cout<<a<<" is odd.";
	return 0;
}
