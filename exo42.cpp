#include <iostream>

//42. Produit des éléments d'un tableau : Calculer le produit de tous les éléments d'un tableau.

using namespace std;

int main(){
	int n;
	
	int a = 1;
	
	int tab[n] = {};
	
	cout << "definir la taille du tableau : ";
	cin>> n;
	
	for(int i = 0 ; i <n ; i++){
		
		cout << "saisir l element a la position  "<<i << " : ";
		cin>>tab[i];
		
		a = a * tab[i];
		
	}
	
	cout << "le produit est de " << a ;	
	
	
	
	return 0;
}
