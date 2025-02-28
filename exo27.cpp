#include <iostream>
#include <cmath>

//27. Calcul de l'équation quadratique : Résoudre une équation quadratique.


using namespace std;

int main() {
    float a, b, c;
    float delta, x1, x2;

    cout << "Entrez le coefficient a : ";
    cin >> a;
    cout << "Entrez le coefficient b : ";
    cin >> b;
    cout << "Entrez le coefficient c : ";
    cin >> c;

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Les solutions sont : " << x1 << " et " << x2 ;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "La solution unique est : " << x1 ;
    } else {
        cout << "Pas de solution réelle." ;
    }

    return 0;
}

