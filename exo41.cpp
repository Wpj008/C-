#include <iostream>

//41. Somme des éléments d'un tableau : Calculer la somme de tous les éléments d'un tableau.

using namespace std;

int main(){
	
	int n,i,d;
	int a = 0;
	
	int tab[n] = {};
	
	cout << "saisir la taille du tableau : ";
	cin >> n;
	
	for( i = 0 ; i < n ; i++){
		
		cout << "element n " <<i << " : ";
		cin>>tab[i];
		
		a = a + tab[i];
	}
		
		cout << "la somme des tous les elements qui se trouvent dans le tableau est de : "<< a;
	
	
	
	return 0;
}
