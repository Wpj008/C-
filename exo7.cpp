#include <iostream>

//7. Calcul de la factorielle : Calculer la factorielle d'un nombre donné


using namespace std;


int main(){
	
	int resultat = 1;
	int a;
	
	cout << " Entrez un nombre : ";
	
	cin >> a;
	
	if(a >0){
		
	for(int i = 1; i<=a ;i++ ){
		
		resultat = resultat * i;
		
		
	}
	
} else {
	
	cout << " Factorielle d'un nombre negatif n'existe pas ";
}
	
	cout << resultat;
	
	
	return 0;
}
