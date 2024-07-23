/*
    Given an array of integers {100, 1 , 2 ,50 ,17}
    apply multiply each element with using std::for_each on the array and print using an iterator loop
*/

#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<std::uint16_t, 5U> num = {100, 1, 2, 50, 17};

    auto multiplyByTwo = [](int a) -> int
    { return a * 2; };

    std::cout << "The array elements \n";
    for (auto element : num)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
    std::cout << "The array elements After multiply each by 2 \n";
    std::for_each(num.begin(), num.end(), multiplyByTwo);

    for (auto i = num.begin() ; i<num.end();++i)
    {
        std::cout << *i << " ";
    }

    std::cout << "\n";

    return 0;
}