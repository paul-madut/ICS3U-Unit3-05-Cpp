// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paul M
// Created on: October 2019
// This program shows the month

#include <iostream>

int main() {
    // variable declaration
    int userNumber;

    // input
    std::cout << "This is a number to month converter" << std::endl;
    std::cout << "Enter a number " << std::endl;
    std::cin >> userNumber;

    // process & output
    switch (userNumber) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "Febuary" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        default :
            if (userNumber == 10) {
                std::cout << "October" << std::endl;
            } else if (userNumber == 11) {
                std::cout << "November" << std::endl;
            } else if (userNumber == 12) {
                std::cout << "December" << std::endl;
            } else {
                std::cout << "Thats not a month" << std::endl;
            }
      }
}
