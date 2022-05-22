#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;

        void gun()      // Definition
        {
            cout<<"Inside gun\n";
        }
        void fun()      // Definition
        {
            cout<<"Inside fun\n";
        }
        void fun(int no)      // Overloaded Definition
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    return 0;
}