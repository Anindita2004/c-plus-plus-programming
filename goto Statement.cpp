#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a positive number";
	cin>>n;
	if(n<=0){
		goto error;
	}
	return 0;
	error:
		cout<<"Error: Invalid input. Please enter a positive number.";
	return 1;
}
