/* Project Euler 6, Cecilia Goss
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <iostream>
#include <time.h> // for clock functions
using namespace std;

int main() {
	long totalSum = 0;
	long totalSumOfSquared = 0;
	long totalSumSquared;
	long difference;

	clock_t t1, t2; // Start timer.
	t1 = clock();

	for (int n = 1; n <= 100; n++) { // Loop through first 100 numbers.
		totalSum = totalSum + n; // Add n to total sum.
		totalSumOfSquared = totalSumOfSquared + n * n; // Square n and add to total sum of squared numbers.
	}

	totalSumSquared = totalSum * totalSum; // Square the sum of natural numbers.
	difference = totalSumSquared - totalSumOfSquared; // Get difference between the sum of squared numbers and the sum of natural numbers squared.
	
	cout << "The difference is " << difference << "." << endl;

	t2 = clock(); // End timer.
	float clockDiff = ((float)t2 - float(t1)); 
	cout << "Runtime for longer method is: " << clockDiff << endl;

	system("pause");
	return 0;
}
using namespace std;