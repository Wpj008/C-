#include <iostream>

//45. Plus petit élément dans un tableau : Trouver le plus petit élément d'un tableau.


using namespace std;

int main(){
	
int tab[5] = {};

int a,i,d;
int min;

int position;

for	(i = 0 ; i < 5 ; i++){
	
	cout << "saisir l element a la position " << i << " : ";
	cin >> tab[i];
	
	}
	
	min = tab[0];
	
	for (d = 0 ; d< 5 ;d++)	{
		
		if(min > tab[d]){
			
			min = tab[d];
			
			position = d;
		}
	}
	
	cout << " la valeur minimale " << min <<" et est a la position " <<position ;
	
	
	
	
	
	return 0;
}
