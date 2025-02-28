#include <iostream>

//36. Fonction de calcul de la factorielle : Créer une fonction qui calcule la factorielle d'un nombre.

using namespace std;

int factorielle(int c){
	

	int a,d;
	
	int b = 1;
	
	for( a = 1 ; a <= c ; a++){
		
		 b = b * a;
	}
	
return b;
	
}

int main(){
	
	int a; 
	
	cout << "saisir une valeur : ";
	cin >> a;
	

	
	
		cout << "la factorielle est de " <<factorielle(a);
	
	
	
	return 0;
}
