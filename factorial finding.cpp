// Write a program to find the factorial of an integer
#include<iostream>
using namespace std;
int main(){
	int a;
	long int fact=1;
	cout<<"Enter an integer: ";
	cin>>a;
	
	for(int i = 1;i <= a;i ++)
		fact *= i;
	cout<<"The factorial, "<<a<<"! = "<<fact;
	return 0;
}
