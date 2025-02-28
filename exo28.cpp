#include <iostream>

//28. Conversion Celsius-Fahrenheit : Convertir une température de Celsius à Fahrenheit.


using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Entrez la température en Celsius : ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "La température en Fahrenheit est : " << fahrenheit << " F" ;

    return 0;
}

