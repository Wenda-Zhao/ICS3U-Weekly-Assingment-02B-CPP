// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Nov 2020
// This program calculates length of triangular prism base side
//     where the user gets to enter the length, surface area and height in mm

#include <iostream>
#include <cmath>

int main() {
    // This program calculates length of triangular prism base side
    int length_b;
    int length_c;
    int height;
    int surface_area;
    int length_a;
    // input
    std::cout << "Enter the length_b: ";
    std::cin >> length_b;
    std::cout << "Enter the length_c: ";
    std::cin >> length_c;
    std::cout << "Enter the height: ";
    std::cin >> height;
    std::cout << "Enter the surface_area: ";
    std::cin >> surface_area;

    // process
    length_a = surface_area/height - length_c - length_b;

    // output
    std::cout << "" << std::endl;
    std::cout << "The length_a is: " << (length_a) << " mm²" << std::endl;
}
