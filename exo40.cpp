#include <iostream>

//40. Fonction de calcul du produit des nombres de 1 à N : Créer une fonction qui calcule le produit de tous les nombres de 1 à N.

using namespace std;

void calcul_produit(int a){
	
	int b= 1;
	
	for(int i = 1 ; i <= a ; i++){
		
		b = b * i;
	}
	
	cout << "le produit de tous les chiffres est de "<<b;
}

int main(){
	
	int a;
	
	cout << "saisir un nombre : ";
	cin >>a;
	
	calcul_produit(a);
	
	
	
	return 0;
}
