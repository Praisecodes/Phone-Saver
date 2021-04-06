#include "Phone.h"

void Phone::Enter()
{
    char answer;
    std::cout << "Dear user, how many numbers do you want to store?: ";
    std::cin >> NumberOfNumbers;

    for(int i = 1; i <= NumberOfNumbers; i++)
    {
        std::cout << "Name: ";
        std::cin >> names[i];
        std::cout << "Number: ";
        std::cin >> numbers[i];
        std::cout << std::endl;
    }
    std::cout << "Dear user would you like to see stored numbers?[Y/N]: ";
    std::cin >> answer;

    switch(answer)
    {
    case 'Y':
        {
            char Answer;
            std::cout << "Dear user would you want to see all?[Y/N]: ";
            std::cin >> Answer;

            switch(Answer)
            {
            case 'Y':
                {
                    UserWantNumbers = true;
                }
                break;

            case 'N':
                {
                    UserWantNumber = true;
                }
                break;

            default:
                std::cout << "Invalid Entry\n";
                break;
            }

        }
        break;

    case 'N':
        {

        }
        break;

    default:
        std::cout << "Invalid entry\n";
        break;
    }
}

void Phone::Display()
{
    std::cout << std::endl;
    for(int i = 1; i <= NumberOfNumbers; i++)
    {
        std::cout << names[i] << ": " << numbers[i] << std::endl;
        std::cout << std::endl;
    }
}

void Phone::DisplayChoice()
{
    std::string name;
    std::cout << "Dear user please enter the name given to the number you wish to search for: ";
    std::cin >> name;

    for (int i = 1; i <= NumberOfNumbers; i++)
    {
        if(names[i] != name && i == NumberOfNumbers)
        {
            std::cout << std::endl;
            std::cout << "OOP!! No match for your entry\n";
        }
        else{
            if(names[i] == name)
            {
                std::cout << std::endl;
                std::cout << names[i] << ":\t" << numbers[i] << std::endl;
                break;
            }
            else{
                continue;
            }
        }
    }
}

bool Phone::UserWantsNumber()
{
    return UserWantNumber;
}

bool Phone::UserWantsNumbers()
{
    return UserWantNumbers;
}
