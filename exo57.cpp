#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//57. Conversion en minuscules : Convertir une chaîne en minuscules.

int main(){
	
	string saisi;
	
	cout<<"Saisir une chaine : ";
	getline(cin, saisi);
	
	//conversion en minuscule caractere par caractere
	
	for(int i = 0 ; i < saisi.length() ; i++){
		
		saisi[i]= tolower(saisi[i]);
	}
	
	cout<<"En minuscule : " << saisi;
	
	
	
	
	
	
	
	
	return 0;
}
