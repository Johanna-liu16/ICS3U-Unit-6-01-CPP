// Copyright Johanna Liu 2022
//
// Created by Johanna Liu
// Created in Dec 2022
// This program calculates the average

#include <iostream>
#include <random>
#include <string>

int main() {
    // This function uses an array

    int aRandomNumber;
    int randomNumber[10];
    double length = sizeof(randomNumber) / sizeof(randomNumber[0]);
    int answer = 0;
    double average;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 100);

    for (int counter = 0; counter < 10; counter++) {
        aRandomNumber = idist(rgen);
        randomNumber[counter] = aRandomNumber;
        std::cout << "Random number is " << aRandomNumber;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int counter = 0; counter != length; counter++) {
        answer = answer + randomNumber[counter];
    }
    average = answer / length;
    std::cout << "The average is " << average << ".";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}