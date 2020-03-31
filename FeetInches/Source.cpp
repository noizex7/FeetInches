// This program demonstrates the FeetInches class's overloaded
// + and − operators.
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
    int feet, inches; // To hold input for feet and inches

    // Create three FeetInches objects. The default arguments
    // for the constructor will be used.
    FeetInches first, second, third;

    // Get a distance from the user.
    cout << "Enter a distance in feet and inches: ";
    cin >> first;

    // Get another distance from the user.
    cout << "Enter another distance in feet and inches: ";
    cin >> second;

    // Display the result.
    cout << "The values you entered are\n";
    cout << first << " and " << second << endl;
    third = first;
    cout << third << endl;
    third = first + second;
    cout << third << endl;

    return 0;
}