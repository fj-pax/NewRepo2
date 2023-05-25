//Geometry Calculator
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PIE = 3.14159;
	double radius, area, length, width, base, height;
	int selection = 0;

	cout << "Geometry Calculator\n\n";
	cout << "1. Calculate the area of a Circle\n2. Calculate the area of a Rectangle\n";
	cout << "3. Calculate the area of a Triangle\n4. Quit\n\nEnter your choice (1-4): ";
	cin >> selection;

	switch (selection)
	{ 
	case 1:
    	cout << "\nEnter the circle's radius: ";
	    cin >> radius; 
	    if (radius < 0)
	        {
	            cout << "\nThe radius can not be less than zero.\n";
	            return 1;
	        }   
	        area = PIE * pow(radius, 2);
	        cout << "\nThe area is " << area << "\n";
	break;
	case 2:
	    cout << "\nEnter the rectangle's length: ";
	    cin >> length;
	    if (length < 0)
	    {
	    cout << "\nOnly enter positive values for length and width.\n";
	    return 2;
	    }
	    cout << "Enter the rectangle's width: ";
	    cin >> width;
	    if (width < 0)
	    {
	        cout << "\nOnly enter positive values for length and width.\n";
	        return 3;
	    }
	        area = length * width;
	        cout << "\nThe area is " << area << "\n";
	break;
	case 3:
	    cout << "Enter the length of the base: ";
	    cin >> base;
	    cout << "Enter the triangle's height: ";
	    cin >> height;
	    if (height < 0 || base <0) 
	    {
	        cout << "\nOnly enter positive values for base and height.\n";
	        return 4;
	    }
	        area = base * height * 0.5;
	        cout << "\nThe area is " << area << "\n";
	break;
	case 4:
	cout << "Program ending.\n";
	break;
	default:
	    cout << "The valid choices are 1 through 4. Run the\nprogram again and select one of those.\n";
	}

	return 0;
}