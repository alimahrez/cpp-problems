/*
    1) Find in the array two numbers sum of 15. A = {1 5 3 6 10}
*/
#include <iostream>
#include <algorithm>

int main()
{
    constexpr std::uint16_t CHECK_NUMBER = 15;
    std::uint16_t numberToFind;
    std::array<std::uint16_t, 5U> elments = {1, 5, 3, 6, 10};

    std::sort(elments.begin(), elments.end());

    for (auto num : elments)
    {
        numberToFind = CHECK_NUMBER - num ;
        if(std::binary_search(elments.begin(), elments.end(), numberToFind))
        {
            std::cout << "SUM of " << CHECK_NUMBER << " is :" << numberToFind << " & " << num << std::endl;
            return 0;
        }
    }

    return 0;
}