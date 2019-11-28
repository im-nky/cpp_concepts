/*
	Function Hiding Demonstration 
	Output: Derived
		Derived
*/

#include <iostream>
using namespace std;

class Base{
	public:
	int fun(int i){cout <<" Base "<<endl;}
};

class Derived: public Base{
	public:
	int fun(char c){cout <<"Derived"<<endl;}
};

int main()
{
	Derived d;
	d.fun(5);
	d.fun('a');
	return 0;
}
