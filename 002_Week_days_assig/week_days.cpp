#include <iostream>

enum weekDays : std::uint16_t
{
    SATURDAY = 1U,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    MAX_DAYS = 7,
};

int main()
{
    std::uint16_t Current_Day = THURSDAY;
    std::uint16_t Elapsed_Days;
    std::uint16_t Days_After;
    std::string Day("");

    std::cout << "Enter Number of days, that will meet after: ";
    std::cin >> Elapsed_Days;

    Days_After = (Current_Day + Elapsed_Days) % MAX_DAYS;

    switch (Days_After)
    {
    case SATURDAY:
        Day = "SATURDAY";
        break;
    case SUNDAY:
        Day = "SUNDAY";
        break;
    case MONDAY:
        Day = "MONDAY";
        break;
    case TUESDAY:
        Day = "TUESDAY";
        break;
    case WEDNESDAY:
        Day = "WEDNESDAY";
        break;
    case THURSDAY:
        Day = "THURSDAY";
        break;
    case FRIDAY:
        Day = "FRIDAY";
        break;
    default:
        Day = "Invalid Day";
        break;
    }

    std::cout << "The Day After " << Elapsed_Days << " is : "<< Day << std::endl;

    return 0;
}