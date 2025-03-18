/*
	Demonstration of encapsulation
*/

#include <iostream>
using namespace std;

class A{
	int a,b;
	public:
	void set(int _a, int _b){		/*Data Hiding*/
		a = _a;
		b = _b;
	}
	void print()
	{
		cout << a <<" "<< b <<endl;
	} 
};

int main()
{
	A a1;
	a1.set(2,3);
	a1.print();
	return 0;
}
