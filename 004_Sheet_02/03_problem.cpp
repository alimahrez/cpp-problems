/*
    Swap two numbers using a function swap passing by reference.
*/

#include <iostream>


void swapNum(std::uint16_t &item_1, std::uint16_t &item_2)
{
    auto container = item_1;
    item_1 = item_2;
    item_2 = container;
}


int main()
{
    std::uint16_t num1, num2;
    std::cout<<"Please Enter Two Numbers : ";
    std::cin>> num1 >> num2;

    swapNum(num1,num2);

    std::cout<<"After Swaping : " << num1 << "  " << num2 << std::endl;

    return 0;
}