#include<iostream>
using namespace std;
int main(){
	int number[5];
	cout<<"Enter number :"<<endl;
	for(int i=0;i<=5;++i){
		cin>>number[i];
	}
	cout<<"Numbers are:"<<endl;
	for(int j=0;j<=5;++j){
		cout<< number[j]<< " ";
	}
	return 0;
}
