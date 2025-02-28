#include <iostream>

//21. Plus grand de deux nombres : Trouver le plus grand de deux nombres.

using namespace std;

int main(){
	
	int a,b;
	
	cout << "saisir deux nombres entiers  \n";
	cout << "le premier : ";
	cin >> a;
	cout <<"\n le second : ";
	cin >> b;
	
	if(a > b){
		
		cout << " valeur superieur : " << a;
	} else if(b > a) {
		
		cout << " valeur superieur : " << b;
	}	else {
		
		cout << "les  valeurs sont egaux";
	} 






return 0;
}
