// Header for function prototypes, defines, etc

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

// Struct to hold user information and pointer to next entry in list
struct node
{
	string first; // First name
	string last; // Last name
	string dob; // Date of birth in dd/mm/yyyy format
	string phone; // Phone number in (###) ###-#### format
	string email; // Email address
	node *next; // Node pointing to the next entry in the list
};

int query(); // Ask the user what they want to do
//int user_input(); // Add new user input to list
