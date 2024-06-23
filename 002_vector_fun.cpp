#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers;

    for (int i = 10; i <= 20; i++)
    {
        numbers.push_back(i); // assign numbers to the vector elements
    }

    // what is the current size of the vector
    std::cout << "size: " << numbers.size() << std::endl;

    // what is the max number you can added to the vector
    std::cout << "max size: " << numbers.max_size() << std::endl;

    // how many element can you add to the vector befor resizeing it
    std::cout << "capacity: " << numbers.capacity() << std::endl;

    // resize the vector to spacific new size
    numbers.resize(5);
    std::cout << "After Resize: " << numbers.size() << std::endl;

    // check the vector is empty or not
    if (numbers.empty())
        std::cout << "vector is empty\n";
    else
        std::cout << "vector is not empty\n";

    // access the element in the vector (1)
    std::cout << "Element [0] is : " << numbers[0] << std::endl;
    // access the element in the vector (2)
    std::cout << "Element at(0) is : " << numbers.at(0) << std::endl;

    std::cout << "Vector Front: " << numbers.front() << std::endl;
    std::cout << "Vector Back: " << numbers.back() << std::endl;

    // delete the vector element
    // numbers.clear();
    // std::cout << "After Clear: " << numbers.size() << std::endl;

    // Update the value of spacific element in vector
    numbers.insert(numbers.begin() + 2, 44);
    // erase spacific element
    numbers.erase(numbers.begin() + 3 );
    numbers.pop_back();

    // how to use the iterators for display all elements in the vector
    for(auto n : numbers)
        std::cout<< n << std::endl;
}
