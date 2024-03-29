#include<iostream>
using namespace std;
int main(){
	int text[3][2]={{2,-9} ,{6,7}, {8,6} 
	};
	for(int i=0;i<3;++i){
		for(int j=0;j<2;++j){
			cout << "text[" << i << "][" << j << "] = " << text[i][j] << endl;
		}
	}
	return 0;
}
