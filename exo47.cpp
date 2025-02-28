#include <iostream>

//47. Inversion d'un tableau : Inverser les éléments d'un tableau.

using namespace std;

int main(){
	
	int const taille(5);	
	
	int tab[taille];
	
	int a,i,d;
	
	for(i = 0 ; i < 5 ; i++){
		
		cout << "saisir les elemeent du tableau a la position "<<i << " : ";
		cin>>tab[i];
		
		
	
		
}
	

	cout << "les element saisis sont : "<< endl;
	
	for(i = 0; i < 5 ; i++){
	
		cout <<tab[i]<<endl;


}

cout << "apres permutation"<<endl;
	for (d = 4 ; d >= 0 ; --d ){
		
		
	
		
		cout << tab[d]<<endl;
	}

	
	
	
	
	return 0;
}
