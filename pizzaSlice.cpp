// This program calculates the number of slices a pizza of any size can be divided into.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PIE = 3.14159;
	double diameter, radius, slices;
	


	//This part gets the user input for the diameter

	cout << "Enter pizza diameter: ";
	cin >> diameter;

	//Now we must calculate the area of the pizza

	radius = diameter / 2; 

	double area = PIE * pow(radius, 2);

	// Now the possible number of slices is calculated

	slices = area / 14.125;

	// Now we can display the number of slices (& convert slices to integer data type)

	cout << static_cast<int>(slices) << " slices\n\n\n";

	return 0;
}