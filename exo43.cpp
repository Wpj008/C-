#include <iostream>

//43. Recherche dans un tableau : Rechercher un élément spécifique dans un tableau.

using namespace std;

int main(){
	
int a,d;

int b = -1;

int	tab[5] = {};
/*
cout << "saisir la taille du tableau : ";
cin >> a;
*/
for(int i = 0 ; i < 5 ; i++){
	
	cout <<"saisir l element a la position "<<i <<" : ";
	cin>>tab[i];
}

cout << "saisir le element a trouver : ";
cin>>a;

for( d = 0 ; d <5 ; d++){
	if(a == tab[d]){
		
		b = d;
break;		
		}
	}


if(b != -1){
	
		cout << "l element "  << " est a la position " << b ;
	}
	else {
		
		cout << "l element n existe pas dans le tableau ";
	}		
	return 0;
}
