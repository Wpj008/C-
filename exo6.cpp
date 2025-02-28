#include <iostream>

//6. Nombre pair ou impair : Vérifier si un nombre est pair ou impair.

using namespace std;

int main (){
	
	int a; 
	
	
cout <<"Entrez un nombre entier : ";

cin >> a;

if(a % 2 == 0){
	
	cout << "Le nombre est pair";
} else {
	
	cout << "Le nombre est impair";
}
	
	
	
	return 0;
}
