#include<iostream>
using namespace std;
int main(){
	int n;
	int i;
	cout<<"Enter number: ";
	cin>>n;
	do{
		cout<<i;
		++i;
		if(i==5){
			break;
		}
	}while(i<=n);
	return 0;
}
