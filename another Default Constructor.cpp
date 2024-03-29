#include<iostream>
using namespace std;
class meow{
	double cat;
	public:
		meow(){
			cout<<"Enter number of cats: ";
			cin>>cat;
			cout<<"total number of cats: "<<cat<<endl;
		}
		
};
int main(){
	meow meow1;
	
	return 0;
}
