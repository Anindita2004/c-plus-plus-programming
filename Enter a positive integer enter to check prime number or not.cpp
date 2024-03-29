#include<iostream>
using namespace std;
void prime();
int main(){
     prime();
 return 0;	
}
void prime(){
	int n, i;
	int flag=0;
	cout<<"Enter a positive integer enter to check: " ;
	cin>>n;
	for(i=2;i<=n/2;++i){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<n<<" number is a prime number";
	}else{
		cout<<n<<" it's not a prime number";
	}
}
