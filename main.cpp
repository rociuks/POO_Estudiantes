#include "Asignatura.cpp"
#include <iostream>
using namespace std;
main(){
	string codigo, nombres, apellidos, curso;
	float nota1, nota2, nota3, nota4, promedio;
	
	cout<<"\t\t\tIngreso de Notas\n"<<endl;
	
	cout<<"Ingresar Codigo: ";
	cin>>codigo;
	cin.ignore();
	cout<<"Ingresar Nombres: ";
	getline(cin,nombres);
	cout<<"Ingresar Apellidos: ";
	getline(cin,apellidos);
	cout<<"Ingresar Curso: ";
	getline(cin,curso);
	cout<<"Ingresar Nota 1: ";
	cin>>nota1;
	cout<<"Ingresar Nota 2: ";
	cin>>nota2;
	cout<<"Ingresar Nota 3: ";
	cin>>nota3;
	cout<<"Ingresar Nota 4: ";
	cin>>nota4;
	cout<<"______________________________________________________"<<endl;
	
     
	//instancia de un objeto 
	Asignatura obj = Asignatura(nombres, apellidos, curso, nota1, nota2, nota3, nota4, promedio, codigo);
	obj.mostrar();
}
