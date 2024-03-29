#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Enter number: ";
	cin>>n;
	do{
		++i;
		if(i==3){
			continue;
		}
		cout<<i;
	}while(i<=n);
	return 0;
	
}
