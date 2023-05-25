//Picks numbers for Texas Two Step lottery game.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int MAX = 35;

	cout << "Welcome to Texas Two Step!\n" << "--------------------------\n\n" << "Press Enter to get your picks!" << endl;
	cin.get();
	cout << setw(2) << (rand() % MAX) + 1 << endl;
	cout << setw(2) << (rand() % MAX) + 1 << endl;
	cout << setw(2) << (rand() % MAX) + 1 << endl;
	cout << setw(2) << (rand() % MAX) + 1 << endl << endl;
	cout << setw(2) << (rand() % MAX) + 1 << "  <----- Bonus!\n\n" << "YEE HAW!!!\n" << "\nGood Luck, partner!" << endl;
	cout << "-------------------\n\n\n\n";


	return 0;
}