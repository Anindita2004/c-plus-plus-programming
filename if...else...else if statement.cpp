#include<iostream>
using namespace std; // Program to check whether an integer is positive, negative or zero
int main(){
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	if(number>0){
		cout<<"it's a positive number";
	}else if(number<0){
		cout<<"it's a negative number";
	
	}else{
		cout<<"You entered 0";
	}
	return 0;
}
