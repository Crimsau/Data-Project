// Functions to be called by main

#include "header.h"

// Query the user for input
int query()
{
	int ans = 0; // Answer value to be returned
	bool check = true; // Error checking loop value

	cout << "\nWhat would you like to do?\n" << endl;
	cout << "1) Add new user info to list" << endl;
	cout << "2) Quit" << endl;
	cout << "3) ???\n" << endl;
	cout << "Enter: ";
	cin >> ans;

	// Check if valid value was entered
	while (check)
	{
		// Check for input buffer overflow
		if (cin.fail())
		{
			// Clear error state
			cin.clear();
			
			// Empty buffer until new line is detected
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		// If answer is in expected range then
		// set check to false to exit the loop
		if (ans >= 1 && ans <= 3)
			check = false;
		
		// Else ask the user to input again
		// and run the check again
		else
		{
			check = true;
			cout << "Invalid input. Please try again" << endl;
			cout << "Enter: ";
			cin >> ans;
		}
	}

	return ans;
}

// Function to read input from user and fill info struct

