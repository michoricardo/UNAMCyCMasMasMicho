//cada nodo tiene un dato y un puntero de siguiente posicion, el primero apunta a null y el segundo apunta al dato anterior y así sucesivamente
/*struct Nodo{
  int dato;
  Nodo *siguiente; el nodo tiene que ser tipo nodo
}; */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int opcion,i;
int numero_ale=0;
int arreglo_numeros[10];
typedef struct nodo{
int valor; //valor del nodo

struct nodo *siguiente_nodo;
}NODO;
typedef NODO *nodoInicial; //estructura NODO puntero de primer nodo
typedef NODO *Pila; //estructura tipo NODO puntero Pila
Pila pila = NULL;
//funciones prototipo
int menu();
int Pop(Pila *ejemplo);
int mostrar(Pila ejemplo);
int insertar(Pila *ejemplo);
int extraer(Pila *ejemplo);
void randomgen();
void inicializar(Pila *ejemplo ,int value);
int main(){
  
  randomgen();
  while(opcion<4){
  opcion=menu();
  printf("\nElegiste la opcion %d\n",opcion);
  switch(opcion) {
    case1:
    case 1:insertar(&pila);
    break;
    case 2:
    extraer(&pila);
    break;
    case 3:
    mostrar(pila);
    break;
    case 4: 
    printf("\nHasta la proxima\n");
    return 0;
    break;
    default:
    printf("\nElige una opcion valida\n");
    }
  }

}

int menu(){
    int opcion;
    printf("\033[0;36m");
    printf("\nElige una opcion por favor\n");
    printf("\n1. Insertar\n");
    printf("\n2. Extraer\n");
    printf("\n3. Mostrar elementos de la pila\n");
    printf("\n4. Fin\n");
    printf("\033[0m");
    scanf("%d",&opcion);  
    return opcion;
}

void randomgen(){
  //pila = NULL;
  int j;
  srand(time(NULL));
  printf("Generando numeros aleatorios:\n");
  for (i=0; i<10; i++) {
    numero_ale=rand()%100;
    arreglo_numeros[i]=numero_ale;
    printf("numero aleatorio: %d\n",numero_ale);
    inicializar(&pila, numero_ale);
  } 
}
void inicializar(Pila *i, int value){
  //recibe un puntero y un valor
  nodoInicial elemento;
  elemento = (nodoInicial)malloc(sizeof(NODO));
  //para reservar memoria
  elemento->valor = value;
  elemento->siguiente_nodo=*i;
  *i=elemento; //ahora el siguiente elemento va a ser el puntero que se recibio
  //printf("%d",value);
  printf("Ingresado a pila \n");
}
int mostrar(Pila ejemplo){ //recibe un tipo NODO
    int v;
    v = Pop(&ejemplo);
    while (v>-1){
    printf("\n El numero %d pertenece a la pila\n",v);
    v=Pop(&ejemplo);
    }
    return 0;
}
int Pop(Pila *ejemplo){
    nodoInicial elemento;
    int v;
    elemento =*ejemplo;
    if(!elemento) return -1;
    *ejemplo=elemento->siguiente_nodo;
    v=elemento->valor;
    //free(num);
    return v;
}
int insertar(Pila *ejemplo){
int valor_nuevo;
    printf("\nInserta el siguiente numero a la pila\n");
    scanf("%d",&valor_nuevo);
    inicializar(&*ejemplo,valor_nuevo);
    return 0;
}
int extraer(Pila *ejemplo){
int valor;
valor=Pop(&*ejemplo);
printf("\n El numero %d ya NO a la pila\n",valor);
return 0;
}