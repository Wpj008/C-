#include <iostream>

//20. Nombre parfait : Vérifier si un nombre est un nombre parfait.

using namespace std;

int main(){
	int a;
	int value;
	
	cout << "saisir un nombre entier : ";
	cin >> a;
	
	for(int i = 1 ; i < a ; i++){
	
			
			if(a % i == 0){
				
				value = value +i;		
		
		}
	}
	
	
	if(value == a){
		
		cout << "c'est un nombre premier";
	} else {
		
		cout << "Ce n'est pas un nombre parfait";
	}

return 0;	
}
