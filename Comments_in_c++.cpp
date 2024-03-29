#include<iostream>
using namespace std;
int main(){
//	int i=212;
//	for(int i=0;i<=4;i++){
//		cout<<i<<(212>>i);  // - Single Line Comments
//		
//	}
int num = 212, i;

    // Shift Right Operation
    cout << "Shift Right:" << endl;

    // Using for loop for shifting num right from 0 bit to 3 bits 
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }
	return 0;
}
/*  -Multi-line Comments*/
