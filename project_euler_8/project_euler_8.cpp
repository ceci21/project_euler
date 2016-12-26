/* Project Euler 8, Cecilia Goss
The four adjacent digits in the 1000 - digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
*/

/*	Read file.
	Put input into a string.
	Set up a counter for reading each digit within the string.
	Also set up a biggestProduct variable.
	Set up a for loop. The for loop should cease after the end of the file.
	Within the for loop, create substrings starting from counter to counter + 13.
	Make another for loop that turns each character in a substring from string into an int.

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	ifstream myFile("input.txt");
	string str;

	myFile >> str;
	myFile.close();

	int strAsInt;
	int j = 0;
	size_t k = 13;
	long long largestProduct = 1;
	int largestj = 0, largestk = 0;
	

	while (k < str.length() + 1) {
		
		long long product = 1;
		for (int n = 0; n < 13; n++) {
			strAsInt = str[j + n] - '0';
			product *= strAsInt;
		}
		if (product >= largestProduct) {
			largestProduct = product;
			largestj = j;
			largestk = k;
		}
		j++;
		k++;
	}

	cout << "The largest product is " << largestProduct << endl;

	system("pause");
	return 0;



}