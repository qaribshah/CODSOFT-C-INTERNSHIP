#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
	//the random number generator
	srand(time(0));

	// generate a random number between 1 and 100
	int numberToGuess = rand() % 100 + 1;

	int guess;
	while (true) 
	{
		// Ask the user for their guess
		cout << "Guess a number between 1 and 100: ";
		cin >> guess;

		// Check if the guess is correct
		if (guess == numberToGuess) 
		{
			cout << "Congratulations! You guessed the correct number." << endl;
			break;
		}
		else if (guess < numberToGuess) 
		{
			cout << "Your guess is too low. Try again." << endl;
		}
		else {
			cout << "Your guess is too high. Try again." << endl;
		}
	}

	return 0;
}