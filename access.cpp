#include<iostream>
using namespace std;

//public private
class Demo
{
        int i;
    public:
        int x;
    private:
         int y;
    public:
        Demo()
        {
            x = 10;
            y = 20;
            i = 30;
        }

        void fun()
        {
            cout<<"Inside public fun\n";
            cout<<y<<"\n";      //Allowed
            gun();      //Allowed
        }
    private:
        void gun()
        {
            cout<<"Inside private gun\n";
            cout<<y<<"\n";      //Allowed
        }
};


int main()
{
    Demo obj;

    cout<<obj.x<<"\n";      //Allowed
//    cout<<obj.y<<"\n";      //Not Allowed
//    cout<<obj.i<<"\n";      //Not Allowed

    obj.fun();      //Allowed
//    obj.gun();      //Not Allowed

    return 0;
}