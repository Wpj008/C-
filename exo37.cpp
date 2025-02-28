#include <iostream>

//37. Fonction de calcul de la somme des chiffres : Créer une fonction qui calcule la somme des chiffres d'un nombre.

using namespace std;

int somme_nombre(int a){
	int b,c,d,somme;
	
	if(a < 100 || a > 999){
		
		cout << "le nombre doit avoir 3 chiffres pas plus, pas moins";
		
	
	} else  {
		
		b = a %10;
		c =(a/10)%10;
		d = a/100;
		
		somme = b + c + d;
	}
	
	
	
	return  somme ;
}

int main(){
	
	int a;
	
	cout << "saisir un nombre a 3 chiffres : ";
	cin >> a;
	
	cout << "la somme est de " << somme_nombre(a);
	
	
	
	
	return 0;
}
