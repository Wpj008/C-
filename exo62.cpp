#include <iostream>

//62. Inversion de deux nombres : Utiliser un pointeur pour inverser deux nombres.

using namespace std;

int main(){
	
	int a,b,c;
	
	int *p;
	
	cout <<"saisir le nombre 1 : ";
	cin>>a;
	cout <<endl;
	cout <<"saisir le nombre 2 : ";
	cin >>b;
	
	p = &a;
	c = *p;
	a = b ;
	 b = c;
	 
	 cout<<"apres inverse ";
	 cout<< a;
	 cout<<b;
	
	
	
	
	
	
	
	
	return 0;
}
