/* Function Overloading: When we have multiple definition of same method in same scope know as function overloading.

   Name Mangling: To distingush among different functions of same name, execution add argument information with name 
   to differnetiate between methods. This is known as Name Mangling.

*/
#include <iostream>
using namespace std;

class box {
        public:
                float area (float l,flaot b)
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
        
         /* Here it;s must to add suffix 'f' else c++ standard will consider it as interger 
           compiler will treat them as float. this will cause ambiguity and result into error
        */

        cout<<"The area of rectangle  "<<b1.area(3.0f,4.5f)<<endl;
        return 0;
}

