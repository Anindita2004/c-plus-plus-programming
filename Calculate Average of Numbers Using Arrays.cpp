#include<iostream>
using namespace std;
int main(){
	int i,n;
	float num[100], average,sum;
	cout<<"Enter the numbers of data: ";
	cin>>n;
	for(i=0;i<n;++i){
		cout << i + 1 << ". Enter number: ";
        cin >> num[i];
		sum+=num[i];
		
	}
	average=sum/2;
	cout<<"Average: "<<average;
	return 0;
}
