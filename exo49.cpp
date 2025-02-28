#include <iostream>

//49. Calcul de la moyenne d'un tableau : Calculer la moyenne des éléments d'un tableau.

using namespace std;

int main(){
	int taille(5);
	int table[taille];
	
	int moyen, somme ;
	

	for(int i = 0 ; i < taille ; i++){
		
		cout << "saisir l element a la position "<< i<< " : ";
		cin>>table[i];
		
		somme = somme + table[i];
		
			
	}
	
	moyen = somme / taille;
	
	cout <<"la moyenne est de "<<somme << " : " << taille << " = "<< moyen;
	
	
	
	return 0;
}
