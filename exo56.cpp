#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//56. Conversion en majuscules : Convertir une cha�ne en majuscules.

int main(){
	
	
	string saisi;
	
	cout<<"saisir une chaine : ";
	getline(cin, saisi);
	
 // Conversion en majuscules caract�re par caract�re
    for (int i = 0; i < saisi.length(); i++) {
        saisi[i] = toupper(saisi[i]); // transformer chaque caract�re
    }

    cout << "En majuscules : " << saisi << endl;

	
	
	return 0;
}
