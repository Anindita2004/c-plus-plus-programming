#include<iostream>
using namespace std;
class student{
	public:
		double marks;
		 
		 student(double m){
		 	marks=m;
		 }
};
double calaverage(student s1 , student s2){
	 double average;
	 average=(s1.marks + s2.marks )/2;
	 cout<<"Average: "<<average;
}
int main(){
	student student1(4.0), student2(4.0);
	calaverage(student1 , student2);
	return 0;
}
