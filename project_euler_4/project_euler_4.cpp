/* Project Euler 4, Cecilia Goss
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3 - digit numbers. 
*/
#include <iostream>
#include <string>
#include <algorithm> // Needed for reverse.

using namespace std;

int main() {

	// Create a variable for largest multiplier and largest multiplicand. (Error is possible here.)
	// First, get two 3 digit numbers by setting within two for loops.
	// Then, get the product.
	// Next is to turn the product into a string. 
	// Cut the length of the string in half
	//		- If even digits, read the first half
	//		  Take the last half of digits and reverse it
	//		  If first half equals last half, then it is a palindrome.
	//		- If odd digits, get length - 1 (because middle digit is negligible)
	//		  Read first half of digits. 
	//		  Reverse last half of digits.
	//		  If first half equals last half, then it is a palindrome.
	// If palindrome, then set current multiplier and current multiplicand to largest.
	// Run through every possible digit less than 1000.
	// Print the largest multiplier and largest multiplicand.

	int product;
	int stringLength;
	int stringHalf;
	bool isPalindrome = false;
	int largestMultiplier;
	int largestMultiplicand;
	int largestPalindrome = 0;

	string str;
	string strReverse;
	
	cout << "calculating..." << endl;
	for (int n = 999; n >= 100; n--) {
		for (int k = 999; k >= 100; k--) {

			product = n * k; // Set product

			str = to_string(product); // Make product into a string

			stringLength = str.length(); // Get string length.

			if (stringLength % 2 == 1) { // If odd, divide length by 2 then subtract 1.
				stringHalf = (stringLength - 1) / 2;
			}
			else if (stringLength % 2 == 0) { // If even, divide length by 2.
				stringHalf = stringLength / 2;
			}

			reverse(str.begin(), str.end()); // Reverses str
			strReverse = str;	// Assigns reverse of str to strReverse
			reverse(str.begin(), str.end()); // Reverses str back to original state


			// Turns substrings into strings
			str = str.substr(0, stringLength - stringHalf + 1);
			strReverse = strReverse.substr(0, stringLength - stringHalf + 1);

			// Turns substrings into ints
			int strAsInt = stoi(str);
			int strReverseAsInt = stoi(strReverse);

			// Checks if strings are equivalent
			if (strAsInt == strReverseAsInt && product > largestPalindrome) {
				isPalindrome = true;
				largestMultiplier = n;
				largestMultiplicand = k;
				largestPalindrome = product;
				
			}
		}
	}

	if (isPalindrome == true) {
		cout << "Multiplier: " << largestMultiplier << endl;
		cout << "Multiplicand: " << largestMultiplicand << endl;
	}
	else {
		cout << "There is no palindrome.";
	}

	// Keeps window open.
	int x;
	cin >> x;

	return 0;
}