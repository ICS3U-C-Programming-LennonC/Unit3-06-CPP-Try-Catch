// Copyright (c) 2026 Lennon Cehajic All rights reserved.
// .
// Created by: Lennon Cehajic
// Date: October 22nd, 2026
// This program runs a random number guessing game.

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    std::string userGuess;
    std::cout << "Welcome to Lennon's random number guessing game.\n";
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userGuess;

    int randomVariable = (std::rand() % 9) + 1;

    try {
        int userGuessInt = std::stoi(userGuess);

        if (userGuessInt == randomVariable) {
            std::cout << "You have guessed correctly!" << std::endl;
        }

        if (userGuessInt != randomVariable) {
            std::cout << "You have guessed incorrectly. The correct number was "
                      << randomVariable << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout
        << userGuess
        << " is not an integer. Please try again.\n";
    }

    std::cout << "Thank you for playing." << std::endl;
}
