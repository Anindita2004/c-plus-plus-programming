#include<iostream>
using namespace std;
void display(string);
void display(char*);
int main(){
	string str1;
	char str[100];
	cout<<"Enter your fullname: ";
	getline(cin,str1);
	cout<<"Enter your nickname: ";
	cin.get(str,100);
	display(str1); //function call
	display(str); //function call
	return 0;
	
}
void display(string str1){
	cout<<"Your FUllname: "<<str1<< endl;
}
void display(char str[100]){
	cout<<"Your nickname : "<<str<< endl;
}
