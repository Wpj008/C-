#include <iostream>

//16. Somme des nombres de 1 à N : Calculer la somme de tous les nombres de 1 à N.

using namespace std;

int main(){
	
	int a;
	int b =0;
	
	cout << "saisir un nombre : ";
	
	cin >> a;
	
	for(int i = 1 ; i <= a ; i++){
		
		 b = b + i;
		
	
	}
	
		cout << b ;
	
	
	return 0;
}
