#include <iostream>
#include <string>
using namespace std;

//arrays are defined
double rainfall[12];
string months[12] = { "January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December" };
//needed variables are declared
double minRain, maxRain, avgRain;

int main()
{
    //get the rainfall for months
    for (int count = 0; count < 12; count++)
    {
        cout << "Enter rainfall for " << months[count] << ": ";
        cin >> rainfall[count];
        while (rainfall[count] < 0) //input validation here using while loop
        {
            cout << "invalid data (negative rainfall) -- retry" << "\n";
            cout << "Enter rainfall for " << months[count] << ": ";
            cin >> rainfall[count];
        }
    }
    float sum = 0.0; //the counter initialized to zero
    //calculate the total rainfall
    for (int count = 0; count < 12; count++)
    {
        sum += rainfall[count];
    }
    cout << "Total rainfall: " << sum << endl;
    //average calculated in a cout statement
    cout << "Average rainfall: " << sum / 12.0 << endl;
    maxRain = rainfall[0];
    minRain = rainfall[0];
    //minIndex and maxIndex used to be a placeholder for the months array
    int minIndex = 0, maxIndex = 0;
    for (int count = 1; count < 12; count++)
    {
        if (rainfall[count] < minRain)
        {
            minRain = rainfall[count];
            minIndex = count;
        }
        if (rainfall[count] > maxRain)
        {
            maxRain = rainfall[count];
            maxIndex = count;
        }
    }
    //max and min values are displayed
    cout << "Least rainfall in: " << months[minIndex] << endl;
    cout << "Most rainfall in: " << months[maxIndex] << endl;
    return 0;
}

