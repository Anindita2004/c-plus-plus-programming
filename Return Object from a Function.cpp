#include<iostream>
using namespace std;
class student{
	public:
	double marks1, marks2;
};
student create(){
	student s1;
	s1.marks1=22;
	s1.marks2 =33;
	cout<<"marks1: "<<s1.marks1<<endl;
	cout<<"marks2: "<<s1.marks2<<endl;
	
}
int main(){
	student student1;
	student1=create();
	return 0;
}
