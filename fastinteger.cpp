/*This is a program to read integers quickly.
 * Only for programming contests*/

// Author: Gautam Singh
// Date: 04 - 07 - 2023

#include <cstdio>
#include <iostream>
void fastscan(int &number){
	// variable to indicate the sign of number 
	bool negative = false;
	register int c;
	number = 0;

	// extract current character from buffer 
	c = getchar();
	if(c == '-'){
		// number is true
		negative = true;

		// extract next character from the buffer
		c = getchar();
	}

	// Keep extracting characters if they are integers
	// i.e., from ASCII '0'(48) to '9'(57)
	for (	; c > 47 && c < 58; c = getchar()) {
		number = number * 10 + c - 48;
	}
	
	// If input is negative then
	// multiply with -1 
	if(negative){
		number *= -1;
	}
}

// Calling the  function

int main(){
	int number;
	fastscan(number);
	std::cout << number << "\n";
	return 0;
}
