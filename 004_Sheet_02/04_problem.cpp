/*
    4) Create a function name it Compute to be called in main with a signature
        void Calculate (const std :: array<int,5>& arr_num, std::function<void (int)>calculateSquare, std::function<void (int)> calculateCube)

        This function takes a vector and 2 pointers to function in the argument list.
        First is a function to calculate power of 2 for even numbers only
        and second is afunction which calculates the power of 3 for odd numbers only.
*/

#include <iostream>
#include <vector>
#include <functional>

void compute(const std ::vector<int> &nums, std::function<void(int)> pwr_of_two, std::function<void(int)> pwr_of_three)
{
    for (auto num : nums)
    {
        if (num % 2 == 0)
        {
            pwr_of_two(num);
        }
        else
        {
            pwr_of_three(num);
        }
    }
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto powerOfTwo = [](int num)
    { std ::cout << "Number: " << num << "^2 = " << num * num << "\n"; };

    auto powerOfThree = [](int num)
    { std ::cout << "Number: " << num << "^3 = " << num * num * num << "\n"; };

    compute(numbers, powerOfTwo, powerOfThree);

    return 0;
}