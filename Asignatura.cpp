#include "Estudiante.cpp"
#include <iostream>
using namespace std;

class Asignatura : Estudiante {
	// atributos
	private : string codigo;
	
	//contructor
	public :
	asignatura (){
	}
	
	Asignatura(string nom, string ape, string cu, float n1, float n2, float n3, float n4, float prom, string c) : Estudiante(nom,ape,cu,n1,n2,n3,n4,prom){
		codigo = c;
		
	}
	// metodos
	// set (modificar)
	void setCodigo(string c){codigo = c;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setCurso(string cu){curso = cu;}
	void setNota1(float n1){nota1 = n1;}
	void setNota2(float n2){nota2 = n2;}
	void setNota3(float n3){nota3 = n3;}
	void setNota4(float n4){nota4 = n4;}
	void setPromedio(float prom){promedio = prom;}
	//get (mostrar)
	 string getCodigo(){return codigo;}
	 string getNombres(){return nombres;}
	 string getApellidos(){return apellidos;}
	 string getCurso(){return curso;}
	 float getNota1(){return nota1;}
	 float getNota2(){return nota2;}
	 float getNota3(){return nota3;}
	 float getNota4(){return nota4;}
	 float getPromedio(){return promedio;}
	// metodos
	void mostrar(){
		cout<<"______________________________________________________"<<endl;
		cout<<"Codigo: "<<codigo<<endl<<"Nombres: "<<nombres<<endl<<"Apellidos: "<<apellidos<<endl<<"Curso: "<<curso<<endl<<"Notas: "<<nota1<<"|"<<nota2<<"|"<<nota3<<"|"<<nota4<<endl<<"Promedio: "<<promedio<<endl;
	}
};
