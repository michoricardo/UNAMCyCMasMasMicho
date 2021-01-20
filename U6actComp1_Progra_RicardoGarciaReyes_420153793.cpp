/*A partir de una lista de calificaciones de los alumnos de primer grado, acceder y mostrar la
información correspondiente a dicha lista mediante el acceso de un apuntador.
Restricciones: Uso de punteros, estructuras de control repetitiva y el arreglo inicia con
diez calificaciones */
#include <iostream>
using namespace std;
/*numero lista, nombre, calif 1, calif 2, calif 3*/
int num_usuario;  

struct alumno{
  char nombre[50];
  int numero_lista;
  int calificaciones[6];//mate,informatica,deportes,quimica,historia,geografia
};
void pedirNumLista();// prototipo
int imprimirDatos(int num_usuario);
void mostrarAlumnos();
alumno alu[10]; //arreglo de estructuras tipo alumno
const char *materias[6] = { "Matematicas", "Informatica","Deportes","Quimica","Historia","Geografia" };
struct alumno *puntero_calif= NULL;
int main() {
alu[0] ={"Ricardo Garcia",1,{100,100,100,100,100,100}};
alu[1]={"Oscar Gutierrez",2,{95,95,95,50,78,99}},
alu[2]={"Alejandro Lara",3,{99,98,95,55,100,100}},
alu[3]={"Yair Garcia",4,{90,99,100,10,22,35}},
alu[4]={"Laura Reyes",5,{88,99,100,88,99,100}},
alu[5]={"Jesus Garcia",6,{88,97,100,50,50}},
alu[6]={"Paola Borrego",7,{100,99,100,100,100}},
alu[7]={"Monica Gonzalez",8,{55,99,100,50,50,40}},
alu[8]={"Fernanda Barreda",9,{80,79,100,40,50,40}},
alu[9]={"Alfonso Cepeda",10,{70,79,96,100,100}};
mostrarAlumnos();
pedirNumLista();
imprimirDatos(num_usuario);
//cout<<puntero_calif->calificaciones;
}
//funciones
void pedirNumLista(){
cout<<"Ingresa numero de lista para ver calificaciones:"<<endl;
cin>>num_usuario;
}
int imprimirDatos(int num_usuario){
cout<<"\033[1m\033[35m"<<endl;
num_usuario = num_usuario-1;
puntero_calif =&alu[num_usuario];
cout<<"Imprimiendo las calificaciones de :"<<endl;
cout<<"Numero lista: "<<alu[num_usuario].numero_lista<<endl;
cout<<"Nombre: "<<alu[num_usuario].nombre<<endl;
for(int x=0;x<6;x++){
cout<<"Materia "<<materias[x]<<"->";
cout<<" Calificacion "<<puntero_calif->calificaciones[x]<<endl;;

}
cout<<"\033[0m"<<endl;
return 0;
}
void mostrarAlumnos(){
  cout<<"\033[1m\033[36m"<<endl;
  cout<<"Alumnos y sus numeros de lista"<<endl;
  cout<<"===================================================="<<endl;
  for(int i=0; i<10;i++){
    cout<<" Numero de lista "<<alu[i].numero_lista<<"->";
    cout<<" Alumno: "<<alu[i].nombre<<endl;
  }
  cout<<"\033[0m"<<endl;
}
