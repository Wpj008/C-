#include <iostream>
#include <string>
#include <algorithm>

//52. Palindrome de chaîne : Vérifier si une chaîne est un palindrome.

using namespace std;

bool estPalindrome(const string& str) {
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    return str == reversed_str;
}

int main() {
    string input_string;
    cout << "Entrez une chaine de caracteres : ";
    getline(cin, input_string);

    if (estPalindrome(input_string)) {
        cout << "La chaine \"" << input_string << "\" est un palindrome." << endl;
    } else {
        cout << "La chaine \"" << input_string << "\" n est pas un palindrome." << endl;
    }

    return 0;
}

