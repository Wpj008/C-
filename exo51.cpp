#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//51. Inversion d'une chaîne : Écrire un programme qui inverse une chaîne de caractères.

int main() {
    string saisie;

    cout << "Saisir une phrase : ";
    getline(cin, saisie);  // Utilise getline pour lire une phrase complète avec espaces

    reverse(saisie.begin(), saisie.end());  // Inverse la chaîne

    cout << "Phrase inversee : " << saisie << endl;

    return 0;
}

