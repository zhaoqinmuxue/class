#include "helloclass.h"

HelloClass::HelloClass()
{
    std::cout << "I am being created!" << std::endl;
}

HelloClass::~HelloClass()
{
    std::cout << "I am being destroyed!" << std::endl;
}

void HelloClass::sayHello()
{
    std::cout << "Hello Class!" << std::endl;
}
