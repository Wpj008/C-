#include <iostream>

using namespace std;

int main(){
	
	int a,b;
	
	int *p1;
	int *p2;
	int *p3;
	p3 = new int;
	
	cout <<"saisir valeur 1 : ";
	cin>>a;
	
	cout<<endl;
	
	cout<<"saisir valeur 2 : ";
	cin>>b;
	
	p1 = &a;
	p2 = &b;
	
	*p3 = *p1 + *p2;
	
	cout<<endl;
	
	cout<<*p3;
	
	delete  p3;
	p3 = 0;
	
	
	
	
	
	return 0;
}
