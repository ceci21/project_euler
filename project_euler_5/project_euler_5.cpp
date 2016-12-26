/* Project Euler 5, Cecilia Goss
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <iostream>
#include <time.h> // for clock functions

using namespace std;
/*
	One option would be to:
		-cycle through all multiples of 12 (since it covers multiples 1, 2, 3, 4, 6) and see if they're multiples of
		 5, 7 - 11, 13 - 20. It would make the code shorter.
	Another basic, but longer method would be to start with 1 and keep going and check if the number is a multiple of all of them.
	I will implement both methods here. 
*/

void shorterMethod() {

	int c = 12; // Counter
	int smallestNumber;

	cout << "calculating..." << endl;

	while (true) {
		if (c % 5 == 0 &&
			c % 7 == 0 &&
			c % 8 == 0 &&
			c % 9 == 0 &&
			c % 10 == 0 &&
			c % 11 == 0 &&
			c % 13 == 0 &&
			c % 14 == 0 &&
			c % 15 == 0 &&
			c % 16 == 0 &&
			c % 17 == 0 &&
			c % 18 == 0 &&
			c % 19 == 0 &&
			c % 20 == 0) {

			smallestNumber = c;
			break;
		}
		c += 12;
	}
	cout << "The answer is " << smallestNumber << "." << endl;
}

void longerMethod() {

	int c = 1; // Counter
	int smallestNumber;
	
	cout << "calculating..." << endl;

	while (true) {
		if (c % 1 == 0 &&
			c % 2 == 0 && 
			c % 3 == 0 && 
			c % 4 == 0 && 
			c % 5 == 0 && 
			c % 6 == 0 && 
			c % 7 == 0 && 
			c % 8 == 0 && 
			c % 9 == 0 && 
			c % 10 == 0 && 
			c % 11 == 0 && 
			c % 12 == 0 && 
			c % 13 == 0 && 
			c % 14 == 0 && 
			c % 15 == 0 && 
			c % 16 == 0 && 
			c % 17 == 0 && 
			c % 18 == 0 && 
			c % 19 == 0 && 
			c % 20 == 0) { 
			
			smallestNumber = c;
			break;
		}
		c++;
	}
	cout << "The answer is " << smallestNumber << "." << endl;
}

int main() {

	// Runtime clock
	clock_t t1, t2;

	t1 = clock();

	shorterMethod();

	t2 = clock();

	float diff = ((float)t2 - float(t1));

	std::cout << "Runtime for shorter method is: " << diff << endl << endl;


	t1 = clock();

	longerMethod();

	t2 = clock();

	diff = ((float)t2 - float(t1));

	std::cout << "Runtime for longer method is: " << diff << endl;


	system("pause");
	return 0;
}

