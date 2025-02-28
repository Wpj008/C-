#include <iostream>

//61. Utilisation de pointeurs simples : Afficher la valeur d'une variable à l'aide d'un pointeur.

using namespace std;

int main(){
	
	int a ; 
	
	int *p(0);
	
	p = &a;
	
	cout << "saisir un nombre : ";
	cin>>a;
	cout<<endl;
	
	cout <<*p;
	
	
	
	
	
	
	
	
	return 0;
}
