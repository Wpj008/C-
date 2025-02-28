#include <iostream>
#include <fstream>
#include <string>

//81. Lecture d'un fichier texte : Lire le contenu d'un fichier texte et l'afficher.

using namespace std;

int main(){
	
string const monfichier("C:/Users/wawit/Desktop/C++/Situation.txt");

ofstream ecriture(monfichier.c_str(), ios::app);

if(ecriture){
		ecriture <<"Bonjour je suis MOI"<<endl;
		ecriture << "tout est sous control"<<endl;
		
	ecriture<< "Bon, nous avons pas mal avancee mais il faut tenir bon"<<endl;
	
} else {
	
	cout <<"erreur";
}
	
	
	ifstream monFlux(monfichier.c_str());
	
	if(monFlux){
		
		string ligne;
		
		while(getline(monFlux, ligne)){
		
		cout<<ligne<<endl;
	}
	} else {
		
		cout <<"ERREUR ";
	}
	
	
	
	
	return 0;
}
