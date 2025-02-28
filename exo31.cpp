#include <iostream>

//31. Fonction de calcul de la somme : Créer une fonction qui calcule la somme de deux nombres.

using namespace std;

int somme (int a, int b){
	
	return a+b;
}

int main(){
	
int a,b;

cout << "saisir le premier nombre : ";
cin >> a ;
cout <<"\n";
cout <<"saisir le deuxieme nombre : ";
cin >> b;

cout<< "la somme est de : "<<somme(a,b);	
	
	
	
	return 0;
}
