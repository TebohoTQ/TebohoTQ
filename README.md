#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>

using namespace std;

// Morse code map for A-Z and 0-9
unordered_map<char, string> morseCode = {
    {'A', ".-"},    {'B', "-..."},  {'C', "-.-."}, {'D', "-.."},
    {'E', "."},     {'F', "..-."},  {'G', "--."},  {'H', "...."},
    {'I', ".."},    {'J', ".---"},  {'K', "-.-"},  {'L', ".-.."},
    {'M', "--"},    {'N', "-."},    {'O', "---"},  {'P', ".--."},
    {'Q', "--.-"},  {'R', ".-."},   {'S', "..."},  {'T', "-"},
    {'U', "..-"},   {'V', "...-"},  {'W', ".--"},  {'X', "-..-"},
    {'Y', "-.--"},  {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"},{'3', "...--"},
    {'4', "....-"}, {'5', "....."}, {'6', "-...."},{'7', "--..."},
    {'8', "---.."}, {'9', "----."},
    {' ', "/"} // Space between words
};

void textToMorse(string input) {
    for (char c : input) {
        c = toupper(c); // convert to uppercase
        if (morseCode.find(c) != morseCode.end()) {
            cout << morseCode[c] << " ";
        } else {
            cout << "? "; // Unknown character
        }
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Enter text to convert to Morse code: ";
    getline(cin, input);

    cout << "Morse Code: ";
    textToMorse(input);

    return 0;
}

