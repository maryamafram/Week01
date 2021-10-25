// Week 01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int seconds, hours, minutes;
int main()

{
    std::cout << "**********************************************************************\n";
    std::cout << "***************** Welcome to my first program ************************\n";
    std::cout << "Convert a large number of seconds into hours, minutes and seconds.\n";
    std::cout << "**********************************************************************\n";

    std::cout << "Please enter a large number of seconds ";
    std::cin >> seconds;
    minutes = seconds / 60;
    hours = minutes / 60;
    std::cout << "The number of hours in the number is " << hours << "\n";
    std::cout << "The number of minutes in the number is " << minutes << "\n";
    std::cout << "The number of seconds in the number is " << seconds << "\n";


}

