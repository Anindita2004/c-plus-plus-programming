#include<iostream>
using namespace std;
class me{
	public:
		void name(){
			cout<<"My name is anindita saha and trust me i'm funny"<<endl;
		}
};
class papa : public me{
	public:
		void name(){
			cout<<"my father name is akshay saha"<<endl;
		}
};
int main(){
	papa papa0;
	// access print() function of the me class
	papa0.me :: name();
	papa0.name();
	 
	return 0;
}
