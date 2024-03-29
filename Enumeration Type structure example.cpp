#include<iostream>
using namespace std;
enum week{
	Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
};
int main(){
    week today;
	today= Sunday;
	cout<<"day: "<<today+1;
	return 0;	
}
