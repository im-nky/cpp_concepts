#include <bits/stdc++.h>
using namespace std;

class Toy {
protected:
	string name;
	float price;
public:
	virtual void applyLabel()    = 0;
	virtual void showProduct()   = 0;
};

class Car : public Toy {
public:
	void applyLabel() { cout << "Applying Car Label" << endl;  name = "Car"; price = 20;}
	void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};

class Bike : public Toy {
public:
        void applyLabel() { cout << "Applying Bike Label" << endl;  name = "Bike"; price = 10;}
        void showProduct () { cout << "Name: " << name << endl << "Price: " << price << endl;}
};

class ToyFactory{
public:
	static Toy * createToy(string type) {
		Toy * toy = NULL;
		if(type=="car") {
			toy = new Car();
		}
		if(type=="bike") {
			toy = new Bike();
		}
		toy->applyLabel();
		toy->showProduct();
		return toy;
	}
};

int main() {
	string type;
	cout <<"Enter Type car/bike"<<endl;
	cin >> type;
	Toy * v = ToyFactory::createToy(type);	
}
