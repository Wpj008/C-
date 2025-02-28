#include <iostream>

//19. Palindrome : Vérifier si un nombre est un palindrome..

using namespace std;

int main(){
	
	int a,b,c,d,e,f,g,h,i,j,k,m;
	
	cout <<"saisir un nombre entier a 3 chiffres : ";
	
	cin >> a;
	
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
	
	
	
	
	return 0;
}
