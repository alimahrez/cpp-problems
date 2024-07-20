#include <iostream>
#include <array>
#include <functional>

void calculate(const std ::array<int, 4U> &nums, std::function<void(int)> calculate_square, std::function<void(int)> calculate_cube)
{
    for (auto num : nums)
    {
        if (num % 2 == 0)
        {
            calculate_square(num);
        }
        else
        {
            calculate_cube(num);
        }
    }
}

int main()
{
    std::array<int, 4U> numbers = {1, 2, 3, 4};

    auto square = [](int num)
    { std ::cout << "Number: " << num << " -> Square : " << num * num << "\n"; };

    auto cube = [](int num)
    { std ::cout << "Number: " << num << " -> Cube   : " << num * num * num << "\n"; };

    calculate(numbers, square, cube);

    return 0;
}