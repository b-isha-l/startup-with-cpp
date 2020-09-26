// Write a program to check, if the integer palindrome or not.
#include<iostream>
using namespace std;
int main(){
	int num, rev = 0, rem, orginal;
	cout<<"Enter an integer: ";
	cin>>num;
	orginal = num;
	
	while(num > 0){
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	
	cout<<"The reverse is: "<<rev<<endl;
	if(orginal == rev)
		cout<<orginal<<" is Palindrome!";
	else
		cout<<orginal<<" is not Palindrome!";
	return 0;
}
