#include<iostream>

namespace Marvellous
{
    fun()
    {
        std::cout<<"Inside fun Marvellous\n";
    }
}

namespace Infosystems
{
    fun()
    {
        std::cout<<"Inside fun Infosystems\n";
    }
}

int main()
{
    std::cout<<"Jay Ganesh\n";

    using namespace Marvellous;
    using namespace Infosystems;

    //fun()     //Ambiguity
    Infosystems::fun();

    return 0;
}