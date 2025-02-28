#include <iostream>

//25. Calcul de l'année bissextile : Vérifier si une année est bissextile.

using namespace std;

int main() {
    int annee;

    cout << "Entrez une annee : ";
    cin >> annee;

    if (annee % 4 == 0) {
        if (annee % 100 != 0) {
            cout << "C'est une annee bissextile." ;
        } else if (annee % 400 == 0) {
            cout << "C'est une année bissextile.";
        } else {
            cout << "Ce n'est pas une annee bissextile.";
        }
    } else {
        cout << "Ce n'est pas une annee bissextile." ;
    }

    return 0;
}

