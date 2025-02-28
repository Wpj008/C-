#include <iostream>

//18. Inversion d'un nombre : Inverser les chiffres d'un nombre donné.

using namespace std;

int main(){
	
	int a,b,c,d;
	
	cout <<"saisir un nombre entier a 3 chiffres : ";
	
	cin >> a;
	
	b = a % 10;
	
	c = (a/10)%10;
	
	d = a/100;
	
	cout << b;
	cout << c;
	
	cout << d;
	
	
	
	
	return 0;
}
