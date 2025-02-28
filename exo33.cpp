#include <iostream>

//33. Fonction de calcul du produit : Créer une fonction qui calcule le produit de deux nombres.

using namespace std;

int produit(int a, int b){
	
	return a * b;
}

int main(){
	int a,b;
	
	cout << "saisir le premier nombre : ";
	cin>> a;
	cout << "saisir le deuxieme nombre : ";
	cin >> b;
	
	cout <<"le produit est de "<<produit(a,b);
	
	
	
	return 0;
}
