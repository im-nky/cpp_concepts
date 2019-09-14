#include<bits/stdc++.h>
using namespace std;

class A
{
        public:
        virtual void print(){cout << "Base class function" <<endl;}
};

class B:public A
{
        public:
         void print(){cout << "Derived class function" <<endl;}
};

int main()
{
        A *a;
        B b;
	a = &b;
        a->print();
        b.print();	
}                    
