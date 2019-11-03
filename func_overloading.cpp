#include <iostream>
using namespace std;

class box {
        public:
                int area (int l,int b)
                {
                        return (l*b);
                }
                float area (int i)
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

