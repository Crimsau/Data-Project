// Header for function prototypes, defines, etc

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Struct to hold user information and pointer to next entry in list
typedef struct {
	string first; // First name
	string last; // Last name
	string dob; // Date of birth in dd/mm/yyyy format
	string phone; // Phone number in (###) ###-#### format
	string email; // Email address
	info *next; // Node pointing to the next entry in the list
}info;

int user_input();
