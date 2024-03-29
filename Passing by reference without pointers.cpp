#include<iostream>
using namespace std;
int swap( int &n1 , int &n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main(){
	int a=2;
	int b=5;
	cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
      swap(a, b); // call function to swap numbers

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
