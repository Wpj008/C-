#include <iostream>

//23. Trois nombres triés : Trier trois nombres en ordre croissant.

using namespace std;

int main() {
    int a, b, c, d;

    cout << "Entrez le premier nombre : ";
    cin >> a;
    cout << "Entrez le deuxième nombre : ";
    cin >> b;
    cout << "Entrez le troisième nombre : ";
    cin >> c;

    if (a > b) {
        d = a;
        a = b;
        b = d;
    }
    if (a > c) {
        d = a;
        a = c;
        c = d;
    }
    if (b > c) {
        d = b;
        b = c;
        c = d;
    }

    cout << "Les nombres en ordre croissant sont : " << a << " " << b << " " << c;

    return 0;
}

