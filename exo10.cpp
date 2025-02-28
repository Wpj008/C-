#include <iostream>

//Calcul de la somme des chiffres : Calculer la somme des chiffres d'un nombre donné.


using namespace std; 

int main (){
	
	int a,c,d,e,somme;
	
	cout << "saisir un nombre a 3 chiffres : ";
	
	cin >> a;
	
	if(a < 100 || a > 999){
		
		cout << " Le nombre doit avoir 3 chiffres entiers. Pas plus, Pas moins";
	} else {
	

	e = a % 10;
	c = (a/10) %10;
	d = a/100;
	somme = e+c+d;
	
	  cout << " somme : "<< somme ;
	
}
	
	
	return 0;
}
