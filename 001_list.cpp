/*
    create CLI application that take a user names and rating from 1 to 10
    then arrange this rating based on two category
    * first the beginners from 1 to 5
    * seconed profficonal from 6 to 10

*/

#include <iostream>
#include <list>

void inputUsers(std::list<std::string> &userName, std::list<int> &raitingList)
{
    bool exitFlag = true;
    std::string name;
    int rate;
    std::cout << "Hello For exit Enter : end\n";

    while (exitFlag)
    {
        std::cout << "Enter User Name : ";
        std::cin >> name;
        exitFlag = (name == "end") ? false : true;

        if (!exitFlag)
            return;

        userName.push_back(name);

        std::cout << "Enter User rate : ";
        std::cin >> rate;
        raitingList.push_back(rate);

        std::cout << "**************************\n";
    }
}

void displayRaiting(std::list<std::string> &userName, std::list<int> &raitingList)
{
    auto rateIndex = raitingList.begin();
    for (auto it = userName.begin(); it != userName.end(); it++)
    {
        std::cout << "User Name : " << *it << "____ Rate : " << *rateIndex << std::endl;
        rateIndex++;
    }
}

int main()
{
    std::list<std::string> userName;
    std::list<int> raitingList;
    std::list<int> biginners;
    std::list<int> profficonal;
    inputUsers(userName, raitingList);
    displayRaiting(userName, raitingList);

    return 0;
}