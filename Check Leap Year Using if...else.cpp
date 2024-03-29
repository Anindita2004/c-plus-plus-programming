#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter year";
	cin>>n;
	if(n%4==0|| n%400==0){
		cout<<n<<" is a leap year.";
		
	}else if(n%100==0){
		cout<<n<<" is not aleap year.";
	}else{
		cout<<n<<" is not a leap year.";
	}
	return 0;
	
}
