/*
	Abstract classes and Abstract function (Pure virtual Function)

	Interface: class containing only abstract functions

*/

# include <iostream>
using namespace std;

class Base {		// Abstract Class: Class containing pure virtual or abstract function
	public:

	virtual void display1()=0;		// Pure Virtual Function or abstract function
	virtual void display2()=0;
	void display(){
		cout <<"Display of Base"<<endl;
	}
};

class Derived: public Base{
	public:
	void display1(){cout <<"Display1 of Derivd"<<endl;}
	void display2(){cout <<"Display2 of Derivd"<<endl;}

};

int main()
{
	Derived d;
	d.display1();
	d.display2();
	d.display();	
	return 0;
}
