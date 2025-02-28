#include <iostream>

//17. Produit des nombres de 1 à N : Calculer le produit de tous les nombres de 1 à N.

using namespace std;

int main(){
	
	int a;
	int b =1;
	
	cout << "saisir un nombre : ";
	
	cin >> a;
	
	for(int i =1; i <= a ; i++){
		
		b = b * i;
	}
	cout << b;
	
	
	return 0;
}
