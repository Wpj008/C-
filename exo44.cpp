#include <iostream>

//44. Plus grand élément dans un tableau : Trouver le plus grand élément d'un tableau.

using namespace std;

int main(){
	
	int tab[5] = {};
	int max ;
	int a,i,d;
	
	int position;
	
	for (i = 0 ; i < 5 ; i++){
		
		cout << "saisir l element a la position "<< i << " : ";
		cin >> tab[i];
		
	}
	
		max = tab[0];
		
	for(d = 0 ; d <5 ; d++){
		
	
		
		if(max < tab[d]){
			
			max = tab[d];
			
			position = d;
		}
	}
		
	cout << "l element superieur est " << max << " et il est a la position " << position;
	
	
	return 0;
}
