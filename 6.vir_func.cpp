/*
	Virtual Function: Giving new implementation to base class method into derived class and 
	accessing it through base class pointer is known as function overriding.
	
	Base class pointer: A pointer which can hold address of it's child or derived class objects.
	
	Virtual keyword indicates compiler late binding has to be performed i.e. memory allocation 
	will take place at runtime.
*/

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
