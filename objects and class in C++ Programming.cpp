#include<iostream>
using namespace std;
class room{
	public:
		double length;
		double breadth;
		double height;
		double area(){
			return length * breadth;
		}
		double volume(){
		return length * breadth * height ;
		}
};

int main(){
	room room1; // create object of Room class
	cout<<"Enter length: ";
	cin>>room1.length;
	cout<<"Enter breadth: ";
	cin>>room1.breadth;
	cout<<"Enter height: ";
	cin>>room1.height;
	// calculate and display the area and volume of the room
	cout<<"Area of Room =  "<<room1.area()<<endl;
	cout<<"Area of volume =  "<<room1.volume()<<endl;
	return 0;
}
