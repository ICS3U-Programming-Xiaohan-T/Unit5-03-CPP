// Copyright 2025
// Created by: Xiaohan
// Created on: May 8, 2025
// This program calculates the grade by the entred level.
#include <iostream>
#include <string>

// Function to calculate the middle mark from a level
int calcMark(std::string level) {
    // Initialize the userGrade variable
    int userGrade = -1;
    // If user enters 4+ as string
    if (level == "4+")
        // userGrade is 100
        userGrade = 98;
    // If user enters 4 as string
    else if (level == "4")
        // userGrade is 92
        userGrade = 92;
        // If user enters 4- as string
    else if (level == "4-")
        // userGrade is 83
        userGrade = 83;
    // If user enters 3+ as string
    else if (level == "3+")
        // userGrade is 78
        userGrade = 78;
    // If user enters 3 as string
    else if (level == "3")
        // userGrade is 75
        userGrade = 75;
    // If user enters 3- as string
    else if (level == "3-")
        // userGrade is 73
        userGrade = 73;
    // If user enters 2+ as string
    else if (level == "2+")
        // userGrade is 70
        userGrade = 70;
    // If user enters 2 as string
    else if (level == "2")
        // userGrade is 65
        userGrade = 65;
    // If user enters 2- as string
    else if (level == "2-")
        // userGrade is 63
        userGrade = 63;
    // If user enters 1+ as string
    else if (level == "1+")
        // userGrade is 60
        userGrade = 60;
    // If user enters 1 as string
    else if (level == "1")
        // userGrade is 55
        userGrade = 55;
    // If user enters 1- as string
    else if (level == "1-")
        // userGrade is 53
        userGrade = 53;
    else
        // If user enters any other string, userGrade is -1
        userGrade = -1;
    // Return the userGrade
    return userGrade;
}

int main() {
    // Indicated the variable
    std::string userLevel;
    // Prompt the user for input
    std::cout << "Enter your level: ";
    // Get the user input
    std::cin >> userLevel;
    // Call the calcMark function and store the result in mark
    int mark = calcMark(userLevel);

    // If mark is -1, print an error message
    if (mark == -1)
        // Print an error message
        std::cout << "Invalid level." << std::endl;
    else
        // Otherwise, print the mark
        std::cout << "The mark is: " << mark << std::endl;
}
