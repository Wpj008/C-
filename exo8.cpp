#include <iostream>

//Affichage de nombres de 1 � N : Afficher tous les nombres de 1 � N.

using namespace std;

int main(){
	
	int a ;
	int b = 1;
	
	cout << "saisis un nombre entier : ";
	
	cin >> a;
	
	while(b <= a){
		
		cout << b << "\n";
		
		b++;
	}
	
	
	return 0;
}
