//This program calculates the average rainfall for 3 months
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string month1, month2, month3;
    double month1value(0), month2value(0), month3value(0);
    double average;

    // I get the user input for the three months. 

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> month1value;


    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> month2value;


    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> month3value;


    // Now the average is calculated.

    average = (month1value + month2value + month3value) / 3.0;

    // The answer is displayed rounded to 2 decimal places. 

    cout << "The average rainfall for " << month1 << ", " << month2 << ", " << "and " << month3 << " is " << setprecision(2) << fixed << average << " inches." << endl;

    return 0;
}