#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &x = no;
    int &y = x;

    int *p = &x;

    return 0;
}