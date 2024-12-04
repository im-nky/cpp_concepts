/* Smart pointer is take care of auto free to allocated memory. It's achieved by operator loading of '*' charater.
=> Overloading is important because * is to work with predefined symbol but not to work with user defined symbols.   
Explicit keyword: It's important to take care of any implicit coversions.
  https://www.geeksforgeeks.org/use-of-explicit-keyword-in-cpp/
*/

#include <bits/stdc++.h>
using namespace std;

class myint {
	private:
		int * data;
	public:
		 explicit myint(int * p = NULL) { data = p;}
		~ myint() {delete(data);}
		int operator * () {return * data;}
};



int main() {
	int * p = new int (5);
	myint m(p);
	cout << *m << endl;
	return 0;
}
