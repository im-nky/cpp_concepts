/* Function Overloading: When we have multiple definition of same method in same scope know as function overloading.

   Name Mangling: To distingush among different functions of same name, execution add argument information with name 
   to differnetiate between methods. This is known as Name Mangling.

*/
#include <iostream>
using namespace std;

class box {
        public:
                int area (int l,int b)
                {
                        return (l*b);
                }
                /* Return type should be same, only parameters can be defer*/
                int area (int i)
                {
                        return (3.14*i*i);
                }
};

int main()
{
        box b1;
        cout<<"The area of circle "<<b1.area(4)<<endl;
        cout<<"The area of rectangle  "<<b1.area(3,4)<<endl;
        return 0;
}

