#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
};
class Hello : public Demo
{
    public:
        int x;
    private:
        int y;
    protected:
        int z;
};
int main()
{
    Demo dobj;
    cout<<dobj.i;     //A
    cout<<dobj.j;     //NA
   cout<< dobj.k;     //NA
    Hello hobj;
    cout<<hobj.x;     //A
    cout<<hobj.y;     //NA
    cout<<hobj.z;     //NA

    cout<<hobj.i;     //A
    cout<<hobj.j;     //NA
    cout<<hobj.k;     //A

    return 0;
}