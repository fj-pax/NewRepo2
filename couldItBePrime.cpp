//This program outputs whether a number is prime or not
#include <iostream>
#include <cmath>
using namespace std;

//This is the isPrime function prototype
bool isPrime(int);

int main()
{
	int num;
	bool prime;

	//get a number from the user
	cout << "Enter a number and I'll tell you whether it is prime: ";
	cin >> num;

	//call the isPrime function testing the user input, then storing the bool value in "prime".
	//then creating the appropriate output according to the bool value.
	prime = isPrime(num);
	{
		if (prime == true) {
			cout << num <<" is prime." << endl;
		}
		else
			cout << num <<" is NOT prime." << endl;
	}

}

//The isPrime function definition
bool isPrime(int test)
{
	if (test <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(test); i++) {
		if (test % i == 0) {
			return false;
		}
	}
	return true;
}
