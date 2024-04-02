#include<iostream>
using namespace std;
class code{
	public:
		int avg(int n1, int n2, int n3){
			return (n1 + n2 + n3)/ 3;
		}
};
int main(){
	code c1;
	cout<<"Enter 3 numbers:"<<endl;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	cout<<"Average of 3 numbers:"<<endl;
	int average= c1.avg(n1 ,n2,n3);
	cout<<average;
	return 0;
}
