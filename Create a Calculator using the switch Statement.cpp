#include<iostream>
using namespace std;
int main (){
	char choice;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>> choice;
	int num1,num2;
	cout<<"Enter 2 number to calculate something"<<endl;
	cin>> num1 >> num2;
	switch(choice){
		case '+': 
		    cout<<num1+num2<<endl;
		     break;
		case '-': 
		    cout<<num1-num2<<endl;
		    break;
		case '*':
		cout<<num1*num2<<endl;
		break;
		case '/':
		cout<<num1/num2<<endl;
		break;
		
	}
	return 0;
}
