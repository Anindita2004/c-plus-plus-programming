#include<iostream>
using namespace std;
class construct{
	public: 
	int a;
	int b;
	construct(){
		a=7;
		b=9;
	}
};
int main(){
	construct s;
	cout<<"a="<<s.a<<endl<<"b="<<s.b<<endl;
	return 1;
}
