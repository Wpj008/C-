#include <iostream>

//28. Conversion Celsius-Fahrenheit : Convertir une temp�rature de Celsius � Fahrenheit.


using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Entrez la temp�rature en Celsius : ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "La temp�rature en Fahrenheit est : " << fahrenheit << " F" ;

    return 0;
}

