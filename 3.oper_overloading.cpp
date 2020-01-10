// Operator Overlaoding: sum of complex numbers

#include <bits/stdc++.h>
using namespace std;

class Complex {
public:
	int real,img;
	Complex(int a, int b):real{a},img{b}{ }
	void print(){cout<<real<<"+i"<<img<<endl;}
	Complex operator + (Complex const &obj) {	// Syntax is important
		//Complex res;
		//res.real = real+obj.real;
		//res.img = img+obj.img;
		return Complex((real+obj.real),(img+obj.img));
		//return res;
	}
};

int main()
{
	Complex c1(10,5),c2(2,4);
	Complex c3=c1+c2;
	c3.print();
	return 0;
}
