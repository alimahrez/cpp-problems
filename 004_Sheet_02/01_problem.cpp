/*
    Sort a given array {5,9,3,7,1} twice using std::sort, the first is ascending order
    and the second is descending order.
*/

#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<std::uint16_t, 5U> num = {5, 9, 3, 7, 1};

    auto ascendingSort = [](int a,int b) -> bool
    { return a < b; };

    auto descendingSort = [](int a, int b) -> bool
    { return a > b; };

    std::cout << "Sorting The array in Ascending Order \n";
    std::sort(num.begin(),num.end(),ascendingSort);

    for(auto element : num)
    {
        std::cout<< element << " ";
    }
    std::cout << "\n";
    std::cout << "Sorting The array in Aescending Order\n";
    std::sort(num.begin(), num.end(), descendingSort);

    for (auto element : num)
    {
        std::cout << element << " ";
    }

    std::cout<<"\n";

    return 0;
}