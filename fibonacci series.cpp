// Write a program to display the fibonacci series.
#include<iostream>
using namespace std;
int main(){
	int a = 0,b = 1,c,num;
	cout<<"How many terms do you want to display? ";
	cin>>num;
	
	cout<<"Fibonacci series:"<<endl;
	if(num >= 2 ){

	cout<<a<<"\t"<<b<<"\t";
	
	for(int i=3;i<=num;i++){
		c = a + b;
		cout<<c<<"\t";
		a = b;
		b = c;
	}
	}
	else if(num = 1)
		cout<<a;
	return 0;
}
