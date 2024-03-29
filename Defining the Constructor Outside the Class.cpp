#include<iostream>
using namespace std;
class student{
	char name[200];
	int roll;
	float fees;
	public :
		// constructor declaration only
		student();
		void display();
};
// outside definition of constructor
student :: student(){
		cout<<"Enter Your name : ";
		cin.get(name,200);
		cout<<"Enter Your ROLL No. : ";
		cin>>roll;
		cout<<"Enter fees: ";
		cin>>fees;
	}
void student :: display(){
		cout<<endl <<"Your name : "<< name << "\t"<<"Your Roll no. : "<< roll<<"\t"<<"Total fee: "<<fees;
	}
int main(){
	student s;
	s.display();
	return 0;
}
