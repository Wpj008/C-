#include <iostream>

//26. Classification des triangles : Classifier un triangle en fonction de ses côtés.


using namespace std;

int main() {
    int a, b, c;

    cout << "Entrez le premier côté : ";
    cin >> a;
    cout << "Entrez le deuxième côté : ";
    cin >> b;
    cout << "Entrez le troisième côté : ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Le triangle est équilatéral." ;
        
    } else if (a == b || b == c || a == c) {
        cout << "Le triangle est isocèle." ;
        
    } else {
        cout << "Le triangle est scalène." ;
    }

    return 0;
}

