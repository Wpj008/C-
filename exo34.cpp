#include <iostream>

//34. Fonction de calcul du quotient : Créer une fonction qui calcule le quotient de deux nombres.

using namespace std;

double quotient (double a, double b){
	
	return a/b;
}

int main(){
int a,b;

cout << "saisir le premier nombre : ";
cin >> a;
cout << "saisir le deuxieme nombre : ";
cin >>b;

cout << "le quotient est de "<<quotient(a,b);	
	
	
	
	return 0;
}
