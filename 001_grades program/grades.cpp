#include <iostream>

namespace Evaluation
{
    std::uint16_t grade;
    std::string evaluation("");

    void getEvaluation()
    {
        std::cout << "Please enter the Grade Number: ";
        std::cin >> Evaluation::grade;

        if (Evaluation::grade >= 50 && Evaluation::grade < 65)
            Evaluation::evaluation = "Passed";

        else if (Evaluation::grade >= 65 && Evaluation::grade < 75)
            Evaluation::evaluation = "Good";

        else if (Evaluation::grade >= 75 && Evaluation::grade < 85)
            Evaluation::evaluation = "Very Good";

        else if (Evaluation::grade >= 85 && Evaluation::grade <= 100)
            Evaluation::evaluation = "excellent";
        else
            Evaluation::evaluation = "OUT OF THE RANGE";
        std::cout << "Your evalution : " << Evaluation::evaluation << std::endl;
    }
}

int main()
{
    while (1)
    {
        Evaluation::getEvaluation();
    }

    return 0;
}