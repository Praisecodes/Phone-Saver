/*
* PRAISE CODES PROPERTY		|| STRICTLY FOR EDUCATIONAL PURPOSES
*
* This code was written by Praise Code and Rightfully belongs to Praise Codes.
*
* A simple and fun to work on C++ OOP project.
* A console system to store and also enable users to search stored phone numbers.
*
* Date: 06/04/2021
* Copyright Praise Codes 2021
* Feel free to check it out also copy and paste.
*/

#include "Phone.h"

int main()
{
    std::cout << "Dear user welcome to my program wherein you can save phone numbers and retrieve them later\n";

    Phone numbers;

    numbers.Enter();

    if(numbers.UserWantsNumbers())
    {
        numbers.Display();
    }
    else{
        if(numbers.UserWantsNumber())
        {
            numbers.DisplayChoice();
        }
    }

    return 0;
}
