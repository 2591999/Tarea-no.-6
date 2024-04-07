#include <iostream>
using namespace std;
// estructuras struct (una forma de agrupar varias variables relacionadas en un solo lugar.)
/*struct Estudiante {
	int codigo[4];
	string nombre[4];
	int nota[4];
};

main(){
	Estudiante estudiante;
	for (int i=0;i<4;i++){
		cout<<"___________________________"<<endl;
		cout<<"Ingrese Codigo:";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Ingrese Nombre completo:";
	getline(cin,estudiante.nombre[i]);
	cout<<"Ingrese Nota:";
	cin>>estudiante.nota[i];
	}

	for (int i=0;i<4;i++){
	cout<<"___________________________"<<endl;
	cout<<"Codigo:"<<estudiante.codigo[i]<<endl;
	cout<<"Nombre Completo:"<<estudiante.nombre[i]<<endl;
	cout<<"Nota:"<<estudiante.nota[i]<<endl;
	}*/
	
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};
main(){
	Estudiante estudiante;
	
	int fila =0,columna = 0;
	cout<<"Cuantos estudiantes desa agregar:";
	cin>>fila;
	
	cout<<"Cuantas notas por Estudiante desea Agregar:";
	cin>>columna;
	
	estudiante.codigo = new int [fila];
	estudiante.nombre = new string [fila];
	estudiante.notas = new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.notas[i] = new int[columna];
	}
	cout<<"_________________Ingreso de Notas_____________"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"codigo:["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<i<<"] :";
			cin>>*(*(estudiante.notas+i)+ii);
		}
		cout<<"______________________________"<<endl;
	}
	cout<<"____Mostrar datos_______"<<endl;
	
	for (int i=0;i<fila;i++){
		cout<<"codigo:["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<i<<"]:"<<*(*(estudiante.notas+i)+ii)<<endl;
		}
		cout<<"______________________________"<<endl;
	}
	
	for (int i=0;i<fila;i++){
		delete[] estudiante.notas[i];
	}
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.notas;
	
	system("pause");
}
