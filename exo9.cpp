#include <iostream>

//9. Table de multiplication : Afficher la table de multiplication d'un nombre donné.

using namespace std;

int main(){
	
	int a, b;
	
	cout << "saisis un nombre entier : ";
	
	cin >> a;
	
	for(int i = 0; i <= 10 ; i++){
		
		b = a * i;
		
		cout << a << " x " << i << " = " << b << "\n";
	}
	
	
	
	
	return 0;
}
