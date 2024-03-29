#include<iostream>
using namespace std;
class count{
	private:
		int value;
	public:
		count(): value(5){
			
		}
		void operator ++(){
			++value;
		}
		void display(){
			cout<<"Count: " << value << endl;
		}
		
		
};
int main(){
	count count1;
	++count1;
	count1.display();
	return 0;
}
