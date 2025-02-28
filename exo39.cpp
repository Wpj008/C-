#include <iostream>

//39. Fonction de calcul de la somme des nombres de 1 à N : Créer une fonction qui calcule la somme de tous les nombres de 1 à N.

using namespace std;

void calcul_somme(int a){
	
	int b;
	
	for(int i = 1 ; i <= a ; i++){
		
	 b = b + i;
	}
	
	cout << "la somme de tous les chiffres est de "<< b;
}
int main (){
	
	int a;
	
	cout << "saisir un nombre : ";
	cin >> a;
	
	calcul_somme(a);
	
	
	
	
	
	
	
	return 0;
}
