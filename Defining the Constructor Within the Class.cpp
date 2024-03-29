#include<iostream>
using namespace std; 
// Constructor in C++ is a special method that is invoked automatically at the time of object creation. 
//It is used to initialize the data members of new objects generally. 
//The constructor in C++ has the same name as the class or structure. It constructs the values i.e. 
//provides data for the object which is why it is known as a constructor.
class student{
	char name[200];
	int roll;
	float fees;
	public :
	student(){
		cout<<"Enter Your name : ";
		cin.get(name,200);
		cout<<"Enter Your ROLL No. : ";
		cin>>roll;
		cout<<"Enter fees: ";
		cin>>fees;
	}
	display(){
		cout<<endl <<"Your name : "<< name << "\t"<<"Your Roll no. : "<< roll<<"\t"<<"Total fee: "<<fees;
	}
};
int main(){
	student s;
	s.display();
	return 0;
}
