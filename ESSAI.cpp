#include <iostream>
#include <fstream>
#include <string>

//

using namespace std;

int main(){
	

	
	string const monNOM("C:/Users/wawit/Desktop/C++/Situation.txt");
	
	ofstream monfichier(monNOM.c_str(), ios::app);
	

		
	if(monfichier){
		
		monfichier<< "Bonjour, PAPAPAPA programme ";
		
		
	} else{
		
		cout<<"ERREUR, le fichier n'existe pas";
	}
	
	
	
	
	ifstream fichier(monNOM.c_str());
	
	if(fichier){
		
	string	line;
		
		
		while(getline(fichier, line)){
			
			cout<<line<<endl;
		}
	}
	else{
		
		cout<<"ERREUR, le fichier n'existe pas";
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
