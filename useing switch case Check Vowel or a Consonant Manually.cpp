#include <iostream>
#include <cctype> // for isalpha

using namespace std;

int main() {
    char c;

    cout << "Enter an alphabet: ";
    cin >> c;

    if (!isalpha(c)) {
        cout << "Error! Non-alphabetic character." << endl;
        return 1;
    }

    switch (toupper(c)) { // Convert to uppercase for case-insensitive check
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << c << " is a vowel." << endl;
            break;
        default:
            cout << c << " is a consonant." << endl;
    }

    return 0;
}

