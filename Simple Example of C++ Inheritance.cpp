#include<iostream>
using namespace std;
class animal{
	public :
		void eat(){
			cout<<"i can eat ."<<endl;
		}
	    void sleep(){
	    	cout<<"i can sleep."<<endl;
		}	
};
class cat: public animal{
	public:
		void bark(){
			cout<<"i can bark!! meow meowww"<<endl;
		}
};
int main(){
	cat cat1;
	cat1.eat();
	cat1.sleep();
	cat1.bark();
		return 0;
}
