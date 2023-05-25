//File Fun!
#include <iostream> 
#include <iomanip>

#include <fstream> 

using namespace std;

int main()
{
	int age;
	double price;

	ifstream inFile;
	ofstream outFile;

	inFile.open("bigchungus.txt");
	outFile.open("biggerchungus.txt");

	inFile >> age >> price;

	outFile << fixed << setprecision(2);
	outFile << "Your age is " << age << " and the price of your book is $" << price << endl;

	inFile.close();
	outFile.close();

	return 0;
}