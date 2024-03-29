#include<iostream>
using namespace std;
int main(){
	int number;
	int sum=0;
	cout<<"Enter number: ";
	cin>>number;
	while(number>=0){
		sum+=number;
		 cout<<"enter a number : ";
		 cin>>number;
		
	}
	cout<<"sum= "<<sum;
	return 0;
	
}
// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum
