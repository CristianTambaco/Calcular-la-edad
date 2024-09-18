#include<iostream>
#include<string>

using namespace std;

int main(){
	//Declaración de variables
	int a;
	int b;
	
	cout<<"** Calcular la edad **"<< endl;	
	cout<<"Ingrese su anio actual:"<< endl;
	cin>> a;
	cout<<"Ingrese su anio de nacimiento:"<<endl;
	cin>> b;
	cout<<"Edad "<< (a-b) <<" anios "<<endl;
	
	return 0;
}
