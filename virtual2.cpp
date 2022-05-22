#include<iostream>
using namespace std;

class Base
{
    public:
        int x, y;
};

class Derived : public Base
{
    public:
        int i, j;
};

int main()
{
    Base *bp = new Base();             // No casting
    Derived *dp = new Derived();   // No casting

    Base *bp1 = new Derived();      // Upcasting
//    Derived *dp1 = new Base();      // Downcasting

    return 0;
}