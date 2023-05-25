#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double x, arg1, arg2;
    cout << "This Program raises a number to a power." << endl;
    cout << "Enter any number:" << endl;
    cin >> arg1;
    cout << "Enter the power you want to raise it to:" << endl;
    cin >> arg2;
    x = pow(arg1, arg2);
    cout << arg1 << " to the power of " << arg2 << " equals:\n" << x << endl;
    cout << "Ain't this just dandy?";
    return 0;
}