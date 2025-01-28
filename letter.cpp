//C++ program that converts a letter entered from the keyboard to its uppercase or lower case equivalent
#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

if (islower(letter)) { 
        letter = toupper(letter); 
        cout << "uppercase equivalent:" << letter <<endl; 
} else if (isupper(letter)) {  
    letter = tolower(letter); 
    cout << "Lowercase equivalent: " << letter <<endl; 
} else { 
    cout << "Invalid input. please enter a valid letter" <<endl;
    }
    return 0;
}
