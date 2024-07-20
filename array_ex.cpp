#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 4U> nums;

    std::cout << "Please Enter 4 element \n";

    for (auto it = nums.begin(); it < nums.end(); ++it)
    {
        std::cin >> *it;
    }

    std::sort(nums.begin(), nums.end());

    for (auto it = nums.begin(); it < nums.end(); ++it)
    {
        std::cout << *it << "\t";
    }

    return 0;
}