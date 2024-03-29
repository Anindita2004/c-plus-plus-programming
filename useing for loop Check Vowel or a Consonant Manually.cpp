#include<iostream>
#include<cctype>
using namespace std;
int main(){
	char c;
	cout<<"Enter an alphabet: ";
	cin>>c;
	if(!isalpha(c)){
		cout<<"Error! Non-alphabetic character."<<endl;
		return 1;
	}
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
		cout<<c<<" is a vowel.";
	}else{
		cout<<c << " is a consonant." << endl;
	}
	return 0;
}
