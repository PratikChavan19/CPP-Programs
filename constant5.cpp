#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;        // Constant Characteristic

        Demo(int a, int b) : j(b)
        {
            i = a;
        }
        void fun()
        {
            cout<<"Inside fun\n";
            i++;        // Allowed
            // j++;     // Not Allowed
        }
        // b is constant inout argument
        void gun(int a, const int b) const      // Constant function/behaviour
        {
            int x = 10;
            const int y = 20;       // Constant local variable

            cout<<"Inside gun\n";
            // i++;        // Not Allowed
            // j++;         // Not Allowed

            x++;        // Allowed
            // y++;        // Not Allowed

            a++;        // Allowed
            // b++;        // Not Allowed
        }
};

int main()
{
    Demo obj1(11, 21);
    const Demo obj2(11, 21);

    obj1.fun();
    obj1.gun(10, 20);

    // obj2.fun();
    obj2.gun(10, 20);

    return 0;
}