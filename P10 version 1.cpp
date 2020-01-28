/* Escriba un programa que compare dos números y determine cual es el mayor*/

#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Ingresa el valor de a: "; cin>>a;
	cout<<"Ingresa el valor de b: "; cin>>b;
	
	if (a>b){
		cout<<"El valor de a es mayor que b"<<endl;	
		cout<<a; cout<<">"; cout<<b<<endl;
	}
	else if (a==b) {
		cout<<"A y B tienen el mismo valor"<<endl;	
		cout<<a; cout<<"="; cout<<b<<endl;
	}
	else {
		cout<<"El valor de b es mayor que a"<<endl;	
		cout<<a; cout<<"<"; cout<<b<<endl;
	}
		
	return 0;
}
