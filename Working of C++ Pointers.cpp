#include<iostream>
using namespace std;
int main(){
	int var=5;
	int* pointvar;
	pointvar = &var; //store address of var
	cout<<"print address of var :  "<< &var<<endl;
	cout<<"print value of var :  "<< var <<endl;
	cout<<"print pointvar  :  "<< &var<<endl;
	cout<<"print (*pointvar)  :  "<< &var<<endl;
	return 0;
	
}
