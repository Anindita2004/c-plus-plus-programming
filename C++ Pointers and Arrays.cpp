#include<iostream>
using namespace std;
int main(){
	int arr[5]; //declared array
	int *ptr; // declare pointer variable
	for(int i=0; i<=5 ; ++i){
		cout << "&arr[" << i << "] = " << &arr[i] << endl;
	}
	ptr = arr;
	for(int i=0; i<=5 ; ++i){
		cout << "ptr + " << i << " = "<< ptr + i << endl;
	}
	return 0;
	
}
