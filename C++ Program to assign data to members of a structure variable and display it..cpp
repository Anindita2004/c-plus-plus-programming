#include<iostream>
using namespace std;
struct node{
	char name[20];
	int age;
	float salary;
};
int main(){
	node p1;
	cout<<"Enter your name : "<< endl;
	cin.get(p1.name,20);
	cout<<"your name : "<< p1.name<<endl;
	cout<<"Enter your age: "<<endl;
	cin>> p1.age;
	cout<<"your age : "<< p1.age<<endl;
	cout<<"Enter your salary: "<<endl;
	cin>> p1.salary;
	cout<<"your salary : "<< p1.salary<<endl;
	
	return 0;
	
}
