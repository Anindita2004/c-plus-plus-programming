#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,determinant,real,imaginary,r1,r2;
	cout<<"Enter 3 numbers";
	cin>>a>>b>>c;
	determinant=b*b-4*a*c;
	if(determinant>0){
		r1=(-b+sqrt(determinant))/(2*a);
		r2=(-b-sqrt(determinant))/(2*a);
		cout<<"Root1= "<<r1;
		cout<<"Root2= "<<r2;
		
	}else if(determinant=0){
		r1=(-b)/(2*a);
		cout<<"Root1= root2 "<<r1;
	}
	else{
		real=(-b)/2*a;
		imaginary=sqrt(determinant)/(2*a);
		cout << "Roots are complex and different."  << endl;
        cout << "root1 = " << real << "+" << imaginary << "i" << endl;
        cout << "root2 = " << real << "-" << imaginary<< "i" << endl;
    }
	
	return 0;
}
