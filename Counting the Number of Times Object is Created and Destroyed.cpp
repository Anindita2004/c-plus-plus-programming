#include<iostream>
using namespace std;
int count=0;
class test{
	public:
		test(){
			count++;
			cout << "\n Constructor executed";
		}
		~test(){
			cout << "\n Destructor executed";
			count--;
		}
};
int main(){
	test t1,t2,t3,t4;
	
	return 0;
}
