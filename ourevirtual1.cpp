#include<iostream>
using namespace std;

class Base
{
    public :
        int x, y;
        //1000
        void fun()      //Concrete Non Virtual
        {
            cout<<"Base fun\n";
        }
        //2000
        virtual void gun()      //Concrete Virtual
        {
            cout<<"Base gun\n";
        }
        //3000
        virtual void sun()      //Concrete Virtual
        {
            cout<<"Base sun\n";
        }
        //____
        virtual void run() = 0;     //Abstract Function
};

class Derived : public Base
{
    public :
        int i, j;
        //4000
        void fun()      //Redefinition ( Concrete ) Function
        {
            cout<<"Derived fun\n";
        }
        //5000
        virtual void gun()      //Overriding
        {
            cout<<"Derived gun\n";
        }
        //6000
        void run()      //Concrete Function
        {
            cout<<"Derived run\n";
        }
};

int main()
{
    // Base bobj;       //Not Allowed
    Derived dobj;       //Allowed

    Base *bp = NULL;
    bp = &dobj;     //Upcasting

    cout<<sizeof(Base)<<"\n";       //16
    cout<<sizeof(Derived)<<"\n";        //24

    bp->fun();      //Base fun
    bp->gun();      //Derived gun
    bp->sun();      //Base sun
    bp->run();      //Derived run

    return 0;
}