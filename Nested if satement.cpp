#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num !=0){
		if(num>0){
			cout<<"it's a positive number";
		}else{
			cout<<"it's a negative number";
		}
	}else{
		cout<<"The number is 0 and it is neither positive nor negative.";
	}
	return 0;
}
// C++ program to find if an integer is positive, negative or zero
// using nested if statements
