#include <iostream>

//46. Trier un tableau : Trier les éléments d'un tableau en ordre croissant.

using namespace std;

int main(){
	int a,b,i,d;
	int min;
	int tab[5]={};
	
	for(i = 0 ; i < 5 ; i++){
	
	cout << "saisir les elements du tableau a la position " << i << " : " ;
 	cin >> tab[i];
	
	
}




for (i = 0 ; i <4 ;i++){
	
	min = i;
	
	for(d = i+1 ; d < 5 ; d++){
	
	if(tab[d] < tab[min]){
		
		min = d;
	}
}

	if(min != i){
		
		b = tab[i];
		tab[i] = tab[min];
		tab[min] = b;
	}
	
}

  cout << "Les valeurs triees en ordre croissant : ";
    for (int i = 0; i < 5; i++) {
        cout << tab[i] << " ";
    }


	
	
	
	return 0;
}
