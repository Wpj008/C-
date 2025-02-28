#include <iostream>

//38. Fonction de vérification de palindrome : Créer une fonction qui vérifie si un nombre est un palindrome.

using namespace std;

void palindrome(int a){
	
	
	int b,c,d,e,f,g,h,i,j,k,m;
	

		
	b = a % 10;
	
	c = (a/10)%10;
	
	d = a/100;
	
	
	j = b *100;
	k = c * 10;
	m = d;
	
	i = j + k + m;
	

	
	
	e = d * 100;
	f = c * 10;
	g = b;
	
	h = e + f + g;


	
	if(i == h){
		
		cout << i <<" =  " << h << "  c'est un palindrome";
	} else {
		
		cout << "ce n'est pas un palindrome";
	}
	
	


}

int main(){
	
	
	int a ;
	
	
	cout << "saisir un nombre : ";
	cin >> a;
	
		if(a < 100 || a > 999){
	
	cout << "le nombre doit avoir 3 chiffres";


	
	}	 else {
	
	palindrome(a);
	
	
	
	}
	
	
	return 0;
}
