// Nazario, Xavier
// October 19, 2025 ©
// Chapter 10 Programming Assignment Vowels and Consonants
// References:
//	Starting out with C++: from Control Structures to Objects (10th edition) by Tony Gaddis
//  C++ Tutorial - Character Sequences https://cplusplus.com/doc/tutorial/ntcs/

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function Prototypes
int countVowel(const char* str);
int countConst(const char* str);
void displayMenu();

// Main function starts here
int main()
{
	// Step 1 Declare variables
	//  Use SIZE, choice, userInput
	const int SIZE = 101; // String size limited: 100 characters
	char userInput[SIZE]; // Holds user string
	char choice; // Holds Menu Choice

	// Step 2 Get user string
	cout << "Please type a sentence (100 characters MAX): ";
	cin.getline(userInput, SIZE);

	// Step 3 Display Menu then Get user choice
	//  Do-while loop with switch statement: cases 1-4, E (exit)
	//  Use toupper() to convert choice to E if e
	do
	{
		displayMenu();
		cout << "Please enter from the options. USE E for exit: ";
		cin >> choice;
		choice = toupper(choice); // Convert to E

		// switch statement for menu choices
		//  Use 1-4 and E (exit)
		switch (choice)
		{
		case '1':
			cout << "Number of Vowels: " << countVowel(userInput) << endl;
			break;

		case '2':
			cout << "Number of Consonants: " << countConst(userInput) << endl;
			break;

		case '3':
			cout << "Number of Vowels: " << countVowel(userInput) << endl;
			cout << "Number of Consonants: " << countConst(userInput) << endl;
			break;

		case '4':
			cin.ignore(); // Clear input buffer
			cout << "Please type a sentence (100 characters MAX): ";
			cin.getline(userInput, SIZE);
			break;

		case 'E':
			cout << "Exiting program. Goodbye!" << endl;
			break;

		default:
			cout << "Please enter a number 1 to 4 or E to exit." << endl;
			break;
		}

		cout << endl; // Breaking up output

	} while (choice != 'E');

	return 0;

}

// Function to count vowels
int countVowel(const char* str)
{
	int vowelCount = 0; // Initialize counter to 0

	// For loop through each character UNTIL null terminator '\0'
	//  Nested if statement to check for vowels, a, e, i, o, u (convert to lower, don't want to confue EXIT)
	//  Use i for variable
	for (int i = 0; str[i] != '\0'; i++)
	{
		// Convert to lower case
		char ch = tolower(str[i]);

		// Check for vowels
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			vowelCount++;
		}
	}

	// Return vowel count
	return vowelCount;
}

// Function to count consonants
int countConst(const char* str)
{
	int constCount = 0; // Initialize counter to 0

	// For loop through each character UNTIL null terminator '\0'
	//  Nested if statement to check for consonants (isalpha and NOT a vowel)
	//  Use i for variable
	for (int i = 0; str[i] != '\0'; i++)
	{
		// Convert to lower case
		char ch = tolower(str[i]);

		// Check for consonants, isalpha and NOT a vowel
		if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
		{
			constCount++;
		}
	}

	// Return consonant count
	return constCount;
}

// Function to display menu
void displayMenu()
{
	cout << "\nMenu Options Are:" << endl;
	cout << "------------------" << endl;
	cout << "1. Count Vowels" << endl;
	cout << "2. Count Consonants" << endl;
	cout << "3. Count Both Vowels and Consonants" << endl;
	cout << "4. Enter a New Sentence" << endl;
	cout << "E. Exit the Program" << endl;
	cout << "------------------" << endl;
}