#include <bits/stdc++.h>
using namespace std;

class myint {
	private:
		int * data;
	public:
		myint(int * p = NULL) { data = p;}
		~ myint() {delete(data);}
		int operator * () {return * data;}
};



int main() {
	int * p = new int (5);
	myint m(p);
	cout << *m << endl;
	return 0;
}
