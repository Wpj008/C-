#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//53. Concat�nation de cha�nes : Concatenner deux cha�nes de caract�res.

int main(){
	
	string saisi1, saisi2, resultat;
	
	cout<<"Saisir le premier mot : ";
	getline(cin,saisi1);
	cout<<endl;
	
	cout<<"Saisir le deuxieme mot : ";
	getline(cin,saisi2);
	
	resultat = saisi1 + saisi2;
	
	cout<<"Apres concatenation : "<<resultat;
	
	
	return 0;
}
