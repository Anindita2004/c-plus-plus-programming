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
	
	me* ptr =&papa0;
	ptr->name();
	 
	return 0;
}
