#ifndef PHONE_H
#define PHONE_H

#include <iostream>

class Phone
{
    public:
        void Enter();
        void Display();
        void DisplayChoice();
        bool UserWantsNumbers();
        bool UserWantsNumber();

    private:
        std::string names[400];
        std::string numbers[400];
        int NumberOfNumbers;
        bool UserWantNumber = false, UserWantNumbers = false;
};

#endif // PHONE_H
