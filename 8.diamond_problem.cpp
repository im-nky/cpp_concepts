#include<bits/stdc++.h>
using namespace std;

class A{
public:
	int a;
	//A(){ cout <<"A() constructor is called"<<endl;}
};

class B:public A{
public:
	int b;
	//B(){ cout <<"B() constructor is called"<<endl;}
};

class C:public A{
public:
	int c;
	//C(){ cout <<"C() constructor is called"<<endl;}	
};

class D: public C, public B
{
public:
	int d;
	//D(){ cout <<"D() constructor is called"<<endl;}
};

int main()
{
	D d;
	d.a=10;
	d.a=100;
	return 0;
}
