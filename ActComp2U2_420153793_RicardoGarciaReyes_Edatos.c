#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nodo{
  int cantidad;
  char descripcion[35];
  float precio;
  struct nodo*siguiente_nodo;
}nodo;
//estructura de los nodos
nodo *primerNodo=NULL;
int opcion;
//funciones prototipo
void insertar();
void mostrar();
void eliminar();
int menu();
int main(void) {

while(opcion<4){
opcion= menu();
  switch(opcion) {
    case1:
    case 1:insertar();
    getchar();
    break;
    case 2:
    eliminar();
    break;
    case 3:
    mostrar();
    break;
    case 4: 
    printf("\nHasta la proxima\n");
    return 0;
    break;
    default:
    printf("\nElige una opcion valida\n");
    }}
    }

int menu(){
    int opcion;
    printf("\033[0;32m");
    printf("\nElige una opcion por favor\n");
    printf("\n1. Insertar a la lista\n");
    printf("\n2. Eliminar de la lista\n");
    printf("\n3. Imprimir la lista\n");
    printf("\n4. Fin\n");
    printf("\033[0m");
    scanf("%d",&opcion);  
    return opcion;
}

void insertar(){
  nodo* nodito = (nodo*)malloc(sizeof(nodo));
  printf("Ingresar datos de producto:\n");
  printf("Descripcion sin espacios: ");
  scanf("%s", nodito->descripcion);
  //getchar();
  printf("Cantidad en enteros: ");
  scanf("%d", &nodito->cantidad);
  printf("Precio (puede ser decimal): ");
  scanf( "%f", &nodito->precio);
  nodito->siguiente_nodo=primerNodo; //putnero hacia nodo uno y despues hacia dos
  primerNodo=nodito; //ahora nuestro nodo actual es el siguiente nodo
}
void mostrar(){
  struct nodo*impresion=primerNodo;
  while(impresion!=NULL){
    printf("Producto:\t %s\n", impresion->descripcion);
    printf("Cantidad:\t %d\n", impresion->cantidad);
    printf("Precio:\t %f\n", impresion->precio);
    printf("====================================\n");
    impresion=impresion->siguiente_nodo;
  }
}
void eliminar(){
  if(primerNodo!=NULL){
  nodo *aux_borrar = primerNodo;
  primerNodo =primerNodo->siguiente_nodo;
  free(aux_borrar);

  }
  else{
    printf("no hay nada para eliminar");

  }
}
//preguntar si no esta vacia
//*aux_borrar y *anterior=NULL
//igualar *aux_borrar al inicio de la lista
//recorrer la lista
//eliminar el elemento