#include <iostream>

//35. Fonction de v�rification pair/impair : Cr�er une fonction qui v�rifie si un nombre est pair ou impair.

using namespace std;

void verifier_pair(int a){
	
	if(a % 2 == 0){
		
		cout << "le chiffre est pair";
	} else {
		
		cout << "le chiffre est impair";
	}
	

}

int main(){
	
	int b ;
	
	cout << "saisir une valeur : ";
	cin >> b;
	
 verifier_pair(b);
	
	return 0;
}


