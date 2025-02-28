#include <iostream>

//29. Calcul de l'impôt : Calculer l'impôt à partir du revenu.


using namespace std;

int main() {
    float revenu, impot;

    cout << "Entrez votre revenu : ";
    cin >> revenu;

    if (revenu <= 1000) {
        impot = 0;
    } else if (revenu <= 3000) {
        impot = (revenu - 1000) * 0.1;
    } else {
        impot = (2000 * 0.1) + (revenu - 3000) * 0.2;
    }

    cout << "L'impot a payer est : " << impot ;

    return 0;
}

