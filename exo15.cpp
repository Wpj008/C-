#include <iostream>

//15. Affichage des nombres impairs : Afficher tous les nombres impairs de 1 à N.

using namespace std;

int main(){
	
	int a;
	
	cout << "saisir un nombre : ";
	
	cin >> a;
	
	for(int i = 0 ; i <= a; i++){
		
		if(i % 2 != 0){
			
			cout << i << "\n";
		}
	}
}
