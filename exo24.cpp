#include <iostream>

//24. Quadrant : D�terminer dans quel quadrant se trouve un point donn�.


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
        cout << "Le point est dans le deuxi�me quadrant.";
    } else if (x < 0 && y < 0) {
        cout << "Le point est dans le troisi�me quadrant.";
    } else if (x > 0 && y < 0) {
        cout << "Le point est dans le quatri�me quadrant." ;
    } else if (x == 0 && y == 0) {
        cout << "Le point est � l'origine." ;
    } else if (x == 0) {
        cout << "Le point est sur l'axe des y." ;
    } else {
        cout << "Le point est sur l'axe des x.";
    }

    return 0;
}

