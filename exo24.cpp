#include <iostream>

//24. Quadrant : Déterminer dans quel quadrant se trouve un point donné.


using namespace std;

int main() {
    int x, y;

    cout << "Entrez la valeur de x : ";
    cin >> x;
    cout << "Entrez la valeur de y : ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "Le point est dans le premier quadrant.";
    } else if (x < 0 && y > 0) {
        cout << "Le point est dans le deuxième quadrant.";
    } else if (x < 0 && y < 0) {
        cout << "Le point est dans le troisième quadrant.";
    } else if (x > 0 && y < 0) {
        cout << "Le point est dans le quatrième quadrant." ;
    } else if (x == 0 && y == 0) {
        cout << "Le point est à l'origine." ;
    } else if (x == 0) {
        cout << "Le point est sur l'axe des y." ;
    } else {
        cout << "Le point est sur l'axe des x.";
    }

    return 0;
}

