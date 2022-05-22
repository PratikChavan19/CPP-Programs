#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
    public:
        T No1;
        T No2;

        Arithmetic(T a, T b)
        {
            No1 = a;
            No2 = b;
        }

        T Addition()
        {
            T ans = 0;
            ans = No1 + No2;
            return ans;
        }
        T Subtraction()
        {
            T ans = 0;
            ans = No1 - No2;
            return ans;
        }
};
int main()
{
    Arithmetic <int>iobj(10, 11);
    int ret = iobj.Addition();
    cout<<"Addition is : "<<ret<<"\n";

    Arithmetic <double>dobj(10.9, 11.5);
    double dret = dobj.Addition();
    cout<<"Addition is : "<<dret<<"\n";

     return 0;
}