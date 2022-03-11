#include <iostream>
using namespace std;
class Estudiante{
	//atrubutos
	protected : string nombres, apellidos, curso;
				float nota1, nota2, nota3, nota4, promedio;
	//constructor
	protected : 
			Estudiante(){
			}
			Estudiante(string nom,string ape,string cu, float n1, float n2, float n3, float n4, float prom){
				nombres = nom;
				apellidos = ape;
				curso = cu;
				nota1 = n1;
				nota2 = n2;
				nota3 = n3;
				nota4 = n4;
				promedio = (n1+n2+n3+n4)/4;
				if (promedio>=61){
         			cout<<"Has aprobado :)"<<endl;
     			}else{
         			cout<<"Has reprobado :("<<endl;
     				}
			}
				
	//metodo
	void mostrar();
};
