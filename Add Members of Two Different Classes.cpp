#include<iostream>
using namespace std;
class classb;
class classa{
	public:
		classa(): numA(12){
		};
	private:
		int numA;
		friend int add(classa,classb);
};
class classb{
	public:
		classb(): numB(12){
		};
	private:
		int numB;
		friend int add(classa,classb);
};
int add(classa object1, classb object2){
	
	return (object1.numA + object2.numB) ;
}
int main(){
	classa object1;
	classb object2;
	cout<<"Sum= "<<add(object1,object2);
	return 0;
}
