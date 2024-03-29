#include<iostream>
using namespace std;
void display(int n[][2]){
	for(int i=0;i<3;++i){
		for(int j=0;j<2;++j){
			cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
		}
	}
}
int main(){
	int n[3][2]={{3,2},{7,8},{2,3}
	     };
	     display(n);
	     return 0;
}
