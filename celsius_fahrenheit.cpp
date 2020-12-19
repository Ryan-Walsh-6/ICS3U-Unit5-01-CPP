// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 10 2020
// this program has a function that converts celsius to fahrenheit

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

void fahrenheit() {
// this program has a function that converts celsius to fahrenheit
    std::string given_string;
    double temp_celsius;
    double temp_fahrenheit = 0.0;
    std::string temp_celsius_string;

    // input, process and output
    while (true) {
         std::cout << "Enter a temperature (°C): ";
         std::cin >> temp_celsius_string;
         std::cout << "" << std::endl;
        try {
            temp_celsius = std::stoi(temp_celsius_string);
            temp_fahrenheit = (temp_celsius * 9/5) + 32;
            std::cout << std::setprecision(1) << std::fixed << temp_celsius <<
            "°C is equal to " << temp_fahrenheit << "°F" << std::endl;
            break;
        }catch (std::invalid_argument) {
        std::cout << temp_celsius_string << " is not a temperature."
                    "Please enter a temperature" << std::endl;
        std::cout << "" << std::endl;
        }
    }
}
main() {
    // this function just call other functions

    // call functions
    fahrenheit();
}
