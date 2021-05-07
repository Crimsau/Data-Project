// Main file
// Info should contain Name, DoB, gender, phone, email
// Should be able to identify incorrect info like numbers in name etc
// Program should give options to read from a file and populate a list,
// manually enter data and add to the list
// sort the list by certain info
// list should be automatically organised by last name
// option to encrypt data using a user input key and write to seperate file
// option to decrypt encrypted file using key
// Destructor at end of program to deallocate memory from list

#include "header.h"

using namespace std;

int main()
{
	info *head; // First node of our list
	info *current; // Traversal node

	// Initialize list
	head = new info;
	head->next = NULL;
	current = head;
	
	// If file containing info exists, read and populate list
	// Else go to menu selection (go to user input for testing)	

	return 0;
}
