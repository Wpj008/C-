#include <iostream>

//30. Classification des �ges : Classifier une personne en fonction de son �ge.


using namespace std;

int main() {
    int age;

    cout << "Entrez l'age : ";
    cin >> age;

    if (age < 13) {
        cout << "Enfant" ;
    } else if (age < 18) {
        cout << "Adolescent" ;
    } else if (age < 65) {
        cout << "Adulte" ;
    } else {
        cout << "Senior" ;
    }

    return 0;
}

