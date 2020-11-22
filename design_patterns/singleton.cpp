#include <bits/stdc++.h>
using namespace std;

class single{
	int brightness;
	single():brightness(10) {}
	static single * instance;
public:
	static single * get_instance () {
		if(instance == NULL) {
			instance = new single();
		}
		return instance;
	}
	void display() {
		cout<<"The current value of brightness "<<brightness<<endl;
	}
	void incre_brightness(int val) {
		cout<<"Incresing Brightness by "<<val<<endl; 
		brightness+=val;
	}
	void decre_brightness(int val) {
		cout<<"Decresing Brightness by "<<val<<endl;
		brightness-=val;
	}
};

single * single::instance=NULL;

int main() {
	single * s = single::get_instance();
	s->display();
	s->incre_brightness(10);
	s->display();
	return 0;
}
