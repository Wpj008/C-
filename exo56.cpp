#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//56. Conversion en majuscules : Convertir une chaîne en majuscules.

int main(){
	
	
	string saisi;
	
	cout<<"saisir une chaine : ";
	getline(cin, saisi);
	
 // Conversion en majuscules caractère par caractère
    for (int i = 0; i < saisi.length(); i++) {
        saisi[i] = toupper(saisi[i]); // transformer chaque caractère
    }

    cout << "En majuscules : " << saisi << endl;

	
	
	return 0;
}
