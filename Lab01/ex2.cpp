#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int code = ch;

    if ((code >= 65 && code <= 90) || (code >= 97 && code <= 122)) {

        int lowerCode = (code >= 65 && code <= 90) ? code + 32 : code;

        if (lowerCode == 97  ||
            lowerCode == 101 ||
            lowerCode == 105 ||
            lowerCode == 111 ||
            lowerCode == 117) {
            cout << ch << " is a VOWEL." << endl;
        } else {
            cout << ch << " is a CONSONANT." << endl;
        }

    } else {
        cout << ch << " is NOT a letter." << endl;
    }

    return 0;
}