#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//58. Comptage des voyelles : Compter le nombre de voyelles dans une chaîne.

int main(){
	
	string saisi;
	char value;
	int result = 0;
	
	cout<<"Saisir une chaine : ";
	getline(cin, saisi);
	
	for(int i = 0; i < saisi.length() ; i++){
		
		value = tolower(saisi[i]);
		
		if(value == 'a' || value == 'i' ||  value == 'o' ||  value == 'u' ||  value == 'e') {
			
			result = result + 1;
		}
		
	}
	
	cout<<"Nombre de voyelle dans la chaine : "<<result;
	
	
	
	
	
	
	return 0;
}
