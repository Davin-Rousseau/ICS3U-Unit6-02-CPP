// Copyright (c) 2019
//
// Created by: Davin Rousseau
// Created on: December 2019
// This program finds the largest number in the list of numbers given

#include <time.h>
#include <iostream>
#include <array>


template<size_t N>
int GreatestValue(std::array<int, N> listOfNumbers) {
    // this functions returns the largest value of a random array

    int largestValue = 0;

    for (int counter = 0; counter < listOfNumbers.size(); counter++) {
        if (listOfNumbers[counter] > largestValue) {
            largestValue = listOfNumbers[counter];
        }
    }
    return largestValue;
}


main() {
    // this uses an array and prints the largest value

    std::array<int, 10> randomNumbers;
    int randomNumber = 0;
    int largestValue = 0;

    srand(time(NULL));
        std::cout << "The values are: ";
        for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
            randomNumber = (rand() % 10) + 1;
            randomNumbers[loop_counter] = randomNumber;
            std::cout << randomNumber << ", ";
        }
        std::cout << " " << std::endl;

        largestValue = GreatestValue(randomNumbers);

        std::cout << "The greatest value is: " << largestValue << std::endl;
}
