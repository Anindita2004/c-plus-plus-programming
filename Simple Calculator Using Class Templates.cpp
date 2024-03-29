#include<iostream>
using namespace std;
template<class t>
class calculator{
	private:
		t num1 ,num2;
	public:
		calculator(t n1, t n2){
			num1=n1;
			num2=n2;
		}
	void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }
    t add(){
    	return num1+num2;
	}
	t subtract(){
		return num1-num2;
	}
	t multiply(){
		return num1*num2;
	}
	t divide(){
		return num1/num2;
	}
};
int main(){
	calculator<int>intcalc(2,2);
	calculator<float>floatcalc(2.0,2.2);
	//calculator<char>charcalc(char a,char b);
	cout << "Int results:" << endl;
	intcalc.displayResult();
	cout << "Float results:" << endl;
	floatcalc.displayResult();
//	cout << "Char results:" << endl;
	//charcalc.displayResult();
	return 0;
	
}

