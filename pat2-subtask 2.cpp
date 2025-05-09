#include <iostream>
#include <string> // For string type

using namespace std,

// Morse code map for A-Z, 0-9, and space
const string morseCode[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", 
    ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", // A-Z
    "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", // 0-9
    "/" // space between words
};

// Function to convert text to Morse code
void textToMorse(string input) {
    for (char c : input) {
        c = toupper(c); // Convert to uppercase
        if (c >= 'A' && c <= 'Z') {
            cout << morseCode[c - 'A'] << " "; // Map A-Z
        } else if (c >= '0' && c <= '9') {
            cout << morseCode[c - '0' + 26] << " "; // Map 0-9
        } else if (c == ' ') {
            cout << morseCode[36] << " "; // Map space to "/"
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

