/*
    we are given an array of integer enelment which contains duplicate values
    and the task is calculate the frequencies of the distinc enelments
    present in an array and print the result.

    a {3,3,5,8,9,8,9,10,17,10,11,17,10}

    elenent : freq
    3   :   2
    5   :   1
    8   :   2
    9   :   2
    10  :   3
    11  :   1
    17  :   2

*/

#include <iostream>
#include <array>
#include <iterator>
#include <vector>
#include <algorithm>

int main()
{
    int orgin = 0;
    int count = 0;
    std::array<int, 13> numbers = {3, 3, 5, 8, 9, 8, 9, 10, 17, 10, 11, 17, 10};
    std::vector<int> orginNumberList;
    std::vector<int> orginTernList;

    auto numbers_sort = [](std::array<int, 13> &arr) -> void
                        {
                            std::sort(arr.begin(), arr.end());
                        };

    numbers_sort(numbers);

        orgin = numbers[0];
    orginNumberList.push_back(numbers[0]);

    for (auto it = numbers.begin(); it <= numbers.end(); ++it)
    {
        if (orgin == *it)
        {
            count++;
        }
        else
        {
            orginTernList.push_back(count);
            count = 1;
            orgin = *it;
            if (it < numbers.end())
            {
                orginNumberList.push_back(orgin);
            }
        }
    }

    std::vector<int>::iterator it1;
    it1 = orginNumberList.begin();
    std::vector<int>::iterator it2;
    it2 = orginTernList.begin();

    std::cout << "Element : Freq" << "\n";

    for (int i = 0; i < orginNumberList.size(); i++)
    {
        std::cout << *(it1 + i) << " : " << *(it2 + i) << "\n";
    }

    return 0;
}
