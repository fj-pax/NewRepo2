//Integer to Roman numeral
#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Enter a number (1 - 10): ";
	cin >> number;

	switch (number)
	{
		case 1:
			cout << "The Roman numeral version of " << number << " is I.\n";
			break;
		case 2: 
			cout << "The Roman numeral version of " << number << " is II.\n";
			break;
		case 3:
			cout << "The Roman numeral version of " << number << " is III.\n";
			break;
		case 4:
			cout << "The Roman numeral version of " << number << " is IV.\n";
			break;
		case 5:
			cout << "The Roman numeral version of " << number << " is V.\n";
			break;
		case 6:
			cout << "The Roman numeral version of " << number << " is VI.\n";
			break;
		case 7:
			cout << "The Roman numeral version of " << number << " is VII.\n";
			break;
		case 8:
			cout << "The Roman numeral version of " << number << " is VIII.\n";
			break;
		case 9:
			cout << "The Roman numeral version of " << number << " is IX.\n";
			break;
		case 10:
			cout << "The Roman numeral version of " << number << " is X.\n";
			break;
		default: 
			cout << "Enter a number in the range one through ten.\n";

	}
	return 0;
}