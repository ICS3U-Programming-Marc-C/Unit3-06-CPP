// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: March, 2022
// This is a guess the number game

#include <iostream>
#include <iomanip>
#include <random>

int main() {
    // Declaring variables

    int someRandomNumber;
    int userGuessAsInt;
    std::string userInput;
    std::random_device rseed;

    std::mt19937 rgen(rseed());  // mersenne_twister

    std::uniform_int_distribution<int> idist(0, 3);  // [0,9]

    someRandomNumber = idist(rgen);


    // Greeting message

    std::cout << "This is a number guessing game.\n";


    // get the guess from the user as a string

    std::cout << "Enter a number between 0 and 9 : ";
    std::cin >> userInput;


    try {
       // convert the user's guess to an int
       userGuessAsInt = std::stoi(userInput);

       // check if the guess is correct
       } catch (std::invalid_argument) {
       // The user did not enter an integer.
       std::cout << userInput << " is not an integer.\n";
}
// Checking number and printing output
if (userGuessAsInt == someRandomNumber) {
    std::cout << "You guessed correctly!\n";
} else {
    std::cout << "You guessed wrong :(\n";
}
}
