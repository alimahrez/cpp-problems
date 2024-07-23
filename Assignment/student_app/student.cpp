#include "student.h"
#include <iostream>

student::student(std::string pName, int pId, int pAge) : mName{pName}, mId{pId}, mAge{pAge}
{
    // constractor
    std::cout<<"The Object is created.\n";
}



void student:: setName(std::string name)
{
    mName=name;
}

void student:: setAge(int age)
{
    mAge = age;
}

void student:: setId(int id)
{
    mId = id;
}

void student:: displayInfo(void)
{
    std::cout<<"**********************\n";
    std::cout<<"Name : " << mId << "\n";
    std::cout<<"Name : " << mName << "\n";
    std::cout<<"Name : " << mAge << "\n";
    std::cout<<"**********************\n";
}

void student:: takeInfo(void)
{
    std::cout<<"Enter Student ID :";
    std::cin>> mId;
    std::cout<<"Enter Student Name :";
    std::cin>> mName;
    std::cout<<"Enter Student Age :";
    std::cin>> mAge;
}