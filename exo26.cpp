#include <iostream>

//26. Classification des triangles : Classifier un triangle en fonction de ses c�t�s.


using namespace std;

int main() {
    int a, b, c;

    cout << "Entrez le premier c�t� : ";
    cin >> a;
    cout << "Entrez le deuxi�me c�t� : ";
    cin >> b;
    cout << "Entrez le troisi�me c�t� : ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Le triangle est �quilat�ral." ;
        
    } else if (a == b || b == c || a == c) {
        cout << "Le triangle est isoc�le." ;
        
    } else {
        cout << "Le triangle est scal�ne." ;
    }

    return 0;
}

