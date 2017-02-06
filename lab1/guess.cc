#include <iostream>
#include <stdlib.h> 
#include <ctime>
#include <string>
#include <cstring>

using namespace std;

int main(void) {
	srand(time(NULL));

	int number = rand() % 99 + 1;
	string input;
	int guess;
		
	while(true) {
		// Get number.
		cout << "Enter a number between 1 and 100 or \"end\" to finish game: ";
		cin >> input;
			
		if (input == "end") {
		    cout << "goodbye!";
		    break;
		} else {
		    guess = atoi(input.c_str());
		}
			
		// Check number.
		if(guess > number) {
			cout << "Too high! Try again.\n";
		} else if(guess < number) {
    		cout << "Too low! Try again.\n";
		} else {
			cout << "Correct!";
			break;
		}
	}		
	return 0;
}
