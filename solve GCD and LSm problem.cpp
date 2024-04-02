#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(b==0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}
int lcm(int a,int b){
	if(a==0 || b==0){
	 return 0;	
	}else{
		return (a*b)/ gcd(a,b);
	}
}
int main(){
	int n1 ,n2;
	cout<<"Enter 2 numbers: "<<endl;
	cin>>n1>>n2;
	cout<<"greatest Common Divisor: "<< gcd(n1,n2);
	cout<<"least Common Multiple: "<< gcd(n1,n2);
	return 0;
}
