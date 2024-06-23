#include <iostream>
#include <iostream>
#include <array>
#include <iterator>
#include <vector>
#include <algorithm>

/*
        [Capture] (parameters) -> return datatype { lambdaex Body; }

*/


// bool cmp(int a, int b)
// {
//     return a > b;
// }


int main()
{
    int x = 3;
    int y = 9;
    int z = 10;

    std::array<int, 13> numbers = {8, 6, 2, 8, 7, 4, 1, 3, 9, 77, 55, 2, 44};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) -> bool { return a > b ;});
    // std::sort(numbers.begin(), numbers.end());

    for (auto element : numbers)
    {
        std::cout << "element : " << element << "\n";
    }


    // lambda Ex for print the three variable after Multiply by 2
    // auto print = [&x, &y , &z]() -> void
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