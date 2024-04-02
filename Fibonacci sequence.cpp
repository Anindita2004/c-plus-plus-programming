#include<iostream>
using namespace std;
class fib{
	public:
		
		int calculatefib(int n){
		if(n<1){
			return n;
		}else{
			return calculatefib(n-1)+ calculatefib(n-2);
		}
		}
};
int main(){
	fib fib1;
	int n=6;
	cout<<"Fibonacci sequence up to " << n << ":" << endl;
	for(int i=0;i<n;i++){
		cout<<fib1.calculatefib(i)<<"";
	}
	
	return 0;
}
