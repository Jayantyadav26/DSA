#include <iostream>
using namespace std;

class base1 {
	
public:
	void display(){
		cout<<"Display base 1"<<endl;
	}
};

class base2 {
	
	public :
		void display(){
			cout<<"diplay base2"<<endl;
			
		}
};

class derived : public base1, public base2{
	
	
	
};












int main(){





return 0;

}