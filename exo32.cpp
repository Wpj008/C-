#include <iostream>

//32. Fonction de calcul de la diff�rence : Cr�er une fonction qui calcule la diff�rence de deux nombres.

using namespace std;

int difference(int a, int b){
	
	return a - b;
}

int main(){
	
	int a,b;
	
	cout << "saisir le premier nombre : ";
	cin >> a;
	
	cout << "saisir le deuxieme nombre : ";
	cin >> b;
	
	cout << "la difference est de " << difference(a,b);
	
	
	
	
	return 0;
}
