# Vowel and Consonant Counter (Chapter 10)

A C++ console application that reads a sentence from the user and analyzes its contents to count vowels and consonants. The program features a simple text-based menu system that allows the user to perform multiple operations without restarting the program.

## Overview
- Prompts the user to enter a sentence of up to 100 characters.
- Displays a menu with options to:
  1. Count vowels.
  2. Count consonants.
  3. Count both vowels and consonants.
  4. Enter a new sentence.
  5. Exit the program.
- Repeats the menu until the user selects the exit option.

## Core Logic
- `countVowel(const char* str)`  
  Iterates through the string and counts all vowel characters (`A, E, I, O, U`) in both uppercase and lowercase.
- `countConst(const char* str)`  
  Counts all alphabetic characters that are not vowels using `isalpha()` for validation.
- `displayMenu()`  
  Prints the available options and prompts for user selection.
- Processes user choice using a `switch` statement, handling both uppercase and lowercase inputs.

## Input Validation
- Rejects invalid menu options and reprompts.
- Uses `cin.getline()` for safe input handling up to the array’s capacity.
- Handles character array input correctly by discarding newline characters from the input buffer when necessary.

## Build & Run
- Visual Studio (Windows): open the solution or create a Console App and add the source file, then **Build → Run**.
- g++ (CLI):
  ```bash
  g++ -std=c++11 -O2 -o VowelConsonantCounter nazarioCPP210.cpp
  ./VowelConsonantCounter
