#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class student
{
    public:
        student(std::string pName, int pId, int pAge);
        std::string GetName(void) {return mName;}
        int getId(void){return mId;}
        int getAge(void){return mAge;}
        void setName(std::string name);
        void setAge(int age);
        void setId(int id);
        void displayInfo(void);
        void takeInfo(void);
    private:
        std::string mName;
        int mId;
        int mAge;


};

#endif