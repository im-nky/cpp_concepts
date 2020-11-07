/*	All instance of singlton will have same instance access	
 * */

#include <bits/stdc++.h>
using namespace std;

class singlton{
	int brightness;
	static singlton* instance;	// Only definition can be provide here	
	private:				
		singlton():brightness(10) {}	// setting default value
	public:	
		//static singlton * instance;
		static singlton* get_instance() {
			if(instance == NULL) 
				instance = new singlton();
			return instance;
		}
		void display() {
			cout << "The Current Brightness is "<<brightness<<endl;
		}
		void set_brightness(int val) {brightness = val;}
};

singlton * singlton::instance = NULL;	// So that memory can be allocated to instance 

int main() {
	//singlton s = new singlton(); // will give Error as constructor is private
	singlton * s = singlton::get_instance();
	s->display();
	singlton * u = singlton::get_instance();
	//s->set_brightness(20);
	s->display();
	return 0;
}
