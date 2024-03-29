#include<iostream>
using namespace std;
struct node{
	char name[20];
	int age;
	float salary;
};
void display(node p1); // Function declaration
int main(){
		node p1;
	cout<<"Enter your name : "<< endl;
	cin.get(p1.name,20);
	
	cout<<"Enter your age: "<<endl;
	cin>> p1.age;

	cout<<"Enter your salary: "<<endl;
	cin>> p1.salary;
	
     display(p1); // Function call
	
	return 0;
}

void display(node p1){
	cout<<"your name : "<< p1.name<<endl;
	cout<<"your age : "<< p1.age<<endl;
	cout<<"your salary : "<< p1.salary<<endl;
}
