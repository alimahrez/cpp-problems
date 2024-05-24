#include <iostream>

int main()
{
    int x = 3;
    int y = 9;
    int z = 10;

    // lambda Ex for print the three variable after Multiply by 2
    auto print = [&]() -> void
    {
        x *= 2;
        y *= 2;
        z *= 2;
        std::cout
            << "var =  " << x
            << "var2 = " << y
            << "var3 = " << z << std::endl;
    };

    print();
}