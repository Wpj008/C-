#include <iostream>

using namespace std;

int main(){
	
	int x; 
	int *p(0);
	cout <<"saisir une valeur : ";
	cin>>x;
	
	p = &x;
	
		cout<< p<<endl;
	cout <<*p;
	cout <<"saisir une autre valeur : ";
	cin>>*p;
	cout<< p<<endl;
	cout <<*p;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
