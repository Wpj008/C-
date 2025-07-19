#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//55. Comparaison de chaînes : Comparer deux chaînes de caractères.

int main(){
	
	string saisi1, saisi2;
	
	cout<<"Saisir le premier mot : ";
	getline(cin, saisi1);
	
	cout<<endl;
	
	cout<<"Saisir le deuxieme mot : ";
	getline(cin, saisi2);
	
	if(saisi1 == saisi2){
		
		cout<<"les chaines sont identiques";
	} else{
		
		cout<<"Les chaines ne sont pas identique";
	}
	
 	
	
	
	return 0;
}
