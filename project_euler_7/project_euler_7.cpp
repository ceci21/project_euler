/* Project Euler 7, Cecilia Goss
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10001st prime number?
*/
#include <iostream>
#include <time.h> // for clock functions

using namespace std;

// First, loop through numbers, endlessly.
// Take one number, and put that number in a loop.
// In that loop, check all numbers below the number you entered that is divided by 2 and modulo 0.
//		If, within that loop, no numbers can be modulo 0'd, then 

bool isPrime(int n) {

	if (n == 2 || n == 1) {
		return true;
	}
	for (int k = 2; k <= n / 2; k++) {
		if (n % k == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int numberOfPrimes = 1;
	int currentNumber = 3;
	int largestPrimeNumber = 2;
	bool isItPrime;

	for (currentNumber;; currentNumber++) {
		isItPrime = isPrime(currentNumber);
		if (isItPrime == true) {
			numberOfPrimes += 1;
			largestPrimeNumber = currentNumber;
		}
		if (numberOfPrimes == 10001) {
			break;
		}
	}

	cout << largestPrimeNumber << endl;

	system("pause");
	return 0;
}