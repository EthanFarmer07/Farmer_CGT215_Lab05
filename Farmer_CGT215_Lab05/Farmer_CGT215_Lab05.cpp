// Farmer_CGT215_Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is for changing a user entered string, character by character (including white space), given what the characters need to be changed into.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// A vector for character encryption.
vector<char> cipherEncryptionKey({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });

// Function for swapping characters within user submited string.
char cipherEncryption(char enteredString, vector<char> encryptingKey) {
    if ((enteredString >= 65) && (enteredString <= 90)) { // Checks to see if the letter is capital.
        return encryptingKey.at(enteredString - 65);
    }
    else if ((enteredString >= 97) && (enteredString <= 122)) { // Checks to see if the letter is lowercase.
        char upperCaseLetter = enteredString - 32; // This will convert the letter to uppercase.
        char upperCaseCode = encryptingKey.at(upperCaseLetter - 65); 
        return upperCaseCode + 32;
    }
    else { // Retuns whatever the character is knowing it is not a letter. 
        return enteredString;
    }
}

int main() {
    // Sets a variable for getting a user inputed string (including the whitespaces).
    string userString;

    // Message for user to know program needs input and grabing the users input.
    cout << "Enter a string (up to 128 characters) to encrypt: ";
    getline(cin, userString);

    // Outputing the users input but it is now encoded.
    cout << "Encoded Message: ";
    for (int i = 0; i < userString.size(); i++) {
        cout << cipherEncryption(userString.at(i), cipherEncryptionKey);
    }

}
