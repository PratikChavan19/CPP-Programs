#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int No1, No2;

        Arithmetic(int a, int b)
        {
            No1 = a;
            No2 = b;
        }

        int Addition()
        {
            int ans = 0;
            ans = No1 + No2;
            return ans;
        }
        int Subtraction()
        {
            int ans = 0;
            ans = No1 - No2;
            return ans;
        }
};

int main()
{
    Arithmetic obj(10, 11);
    int ret = obj.Addition();
    cout<<"Addition is : "<<ret<< "\n";

     return 0;
}