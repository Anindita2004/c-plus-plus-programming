#include<iostream>
using namespace std;
class animal{ //base class
	public:
		void info(){
			cout<<"i am an animal"<<endl;
		}
};
class dog: public animal{ //class 1
	public:
		void bark(){
			cout << "I am a Dog. Woof woof." << endl;
		}
};
class cat: public animal{ //class2
	public:
		void meow(){
			cout<<"i'm a cat . meow meow"<< endl;
		}
};
int main(){
	// Create object of dog class
	dog dog1;
	dog1.info();//parent class
	dog1.bark();
	// Create object of Cat class
	cat cat1;
	cat1.info();//parent class
	cat1.meow();
	return 0;
}
