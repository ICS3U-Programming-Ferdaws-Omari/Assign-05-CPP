// Copyright (c) 2022 Jedidiah Alfred-Aigbe All rights reserved.
//
// Created By: Ferdaws
// Date: May 2022
// This program calculates the area of a triangle.
#include <iostream>
# include <cmath>
# include <string>
# include <iomanip>

using std::cout;
using std::string;
using std::endl;


float CalcArea(float userSide) {
    // declare variables
    float newArea;

    // calculate area
    newArea = 6 *  pow(userSide, 2);
    return newArea;
}

float CalcVolume(float userSide) {
    // declare variables
    float newVolume;

    // calculate area
    newVolume = pow(userSide, 3);
    return newVolume;
}


int main() {
    // declare variables
    float area, volume;
    std::string units, side;

    // get input
    std::cout << "Enter the side: ";
    std::cin >> side;

    std::cout << "Enter the units: ";
    std::cin >> units;

    // error checking
    try {
        float sideInput = std::stof(side);
        float area = CalcArea(sideInput);
        float volume = CalcVolume(sideInput);
        cout << endl;
        cout << "Area = " << area <<  units << std::fixed <<
        std::setprecision(2) << std::setfill('0') << endl;
        cout << "\n";
        cout << "volume = " << volume << units << "\n";
    } catch (std::invalid_argument) {
        cout << "Invalid input(s).";
    }
}
