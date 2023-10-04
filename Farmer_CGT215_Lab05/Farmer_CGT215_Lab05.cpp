// Farmer_CGT215_Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is for changing a user entered string, character by character (including white space), given what the characters need to be changed into.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* Eventual function for swapping characters within user submited string.
void cipher(vector<char>& normalCharVector) {
    char t(normalCharVector[0]);
}
*/

int main()
{
    // Sets a variable for getting a user inputed string (including the whitespaces).
    string userString;
    // Set of vectors for character conversion.
    vector<char> cypherCharVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });

    // Message for user to know program needs input and grabing the users input.
    cout << "Enter a string (up to 128 characters) to encrypt: ";
    getline(cin, userString);

    // Outputing the users input but it is now encoded.
    cout << "Encoded Message: " << userString;

}
