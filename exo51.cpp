#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//51. Inversion d'une cha�ne : �crire un programme qui inverse une cha�ne de caract�res.

int main() {
    string saisie;

    cout << "Saisir une phrase : ";
    getline(cin, saisie);  // Utilise getline pour lire une phrase compl�te avec espaces

    reverse(saisie.begin(), saisie.end());  // Inverse la cha�ne

    cout << "Phrase inversee : " << saisie << endl;

    return 0;
}

