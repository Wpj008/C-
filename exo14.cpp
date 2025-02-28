#include <iostream>

//14. Affichage des nombres pairs : Afficher tous les nombres pairs de 1 à N.

using namespace std;

int main (){
	
	int a;
	
	cout << "saisir un nombre : ";
	
	cin >> a;
	
	for(int i = 0 ; i <= a ; i++){
		
		if(i % 2 == 0){
			
			cout << i << "\n";
		}
	}
	
	
	
	return 0;
}
