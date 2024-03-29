#include<iostream>
using namespace std;
int main(){
	int n;
	int fac=1;
	cout<<"Enter number: ";
	cin>>n;
	if(n<0){
		cout<<"Error! Factorial of a negative number doesn't exist.";
	}else{
		for(int i=1;i<=n;++i){
			fac*=i;
		}
		cout<<"Factorial of " << n << " = " << fac;
	}
	return 0;
}
