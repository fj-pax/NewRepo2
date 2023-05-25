#include <iostream>

using namespace std;

int main()
{
	int nbooksPurchased, freeBooks;
	bool isPremiumCustomer; 

	cout << "Are you a Premium customer? (Enter '1' for yes or '0' for no.)\n";
	cin >> isPremiumCustomer; 
	cout << "How many books have you purchased? \n";
	cin >> nbooksPurchased;

	if (isPremiumCustomer)
	{
		if (nbooksPurchased >= 5)
		{
			freeBooks = 1;
			if (nbooksPurchased >= 8)
			{
				freeBooks = 2;
				if (freeBooks > 0)
				{
					cout << "You qualify for " << freeBooks << " free books!\n";
				}

			}
			else
				cout << "You qualify for " << freeBooks << " free book!\n";
		}
		else
			cout << "You don't qualify for free books.\n";
	}
	else
		if (nbooksPurchased >= 7)
		{
			freeBooks = 1;
			if (nbooksPurchased >= 12) {
				freeBooks = 2;
				if (freeBooks > 0)
					cout << "You qualify for " << freeBooks << " free books!\n";
			}
			else
				cout << "You qualify for " << freeBooks << " free book!\n";
		}
		else
			cout << "No free books, next time buy more books.\n";
	return 0;
}