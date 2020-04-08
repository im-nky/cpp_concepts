#include <bits/stdc++.h>
using namespace std;

class A{
	int a;
 public:
	void print(int a){cout<<"print int "<<a<<endl;} 
	void print(float a){cout<<"print float "<<a<<endl;}
	void print(const char * a){cout<<"print char from base class "<<a<<endl;}
};

class B:public A{
 public:
	//using A :: print
	void print(const char * a){cout<<"print char from derived class "<<a<<endl;}
};

int main() {
	B b;
	b.A::print(1); 
	b.A::print(2.24f);
	b.A::print("Nitin");
	b.print("Nitin");
	return 0;
}
