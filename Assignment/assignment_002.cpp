/*
    Calculate takes two parameters first is vector, second is a function which
    modifys the elememnts of the vector to be swapped with another vector
    and call sort function for sorting the vector
*/

#include <iostream>
#include <vector>
#include <functional>

void calculator_fun(std::vector<int> &vec, std::function<void(void)> cbk)
{
}

int main()
{
    std::vector<int> vec1 = {10, 2, 3, 4, 6};
    std::vector<int> vec2 = {5, 20, 6, 80, 7};

    auto lambda_swap = [&vec1, &vec2]() -> void
    { std::swap(vec1, vec2); };

    auto lambda_vec_value = [&vec1, &vec2]() -> void
    {
        for (auto element : vec1)
        {
            std::cout << element << "\t";
        }
        std::cout << "\n";
        for (auto element : vec2)
        {
            std::cout << element << "\t";
        }
        std::cout << "\n";
    };



    return 0;
}