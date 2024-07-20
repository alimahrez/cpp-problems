#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> list{50,10,30,100,70,60};

    std::sort(list.begin(),list.end());

    for(auto &elements : list)
    {
        std::cout << "Element : " << elements << "\n";
    }

    return 0;
}