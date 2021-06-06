#include <stdio.h>
#include <stdlib.h>
//variables
int dato;
typedef struct Nodo{ //estructura tipo nodo
  int dato;
  struct Nodo *derecha;
  struct Nodo *izquierda;
}Nodo;

Nodo *crearNodo(int dato){
  Nodo *nuevoNodo=malloc(sizeof(Nodo));
  if(nuevoNodo!=NULL){ //se obliga a estar vacío recien creado
    nuevoNodo->izquierda=NULL;
    nuevoNodo->derecha=NULL;
    nuevoNodo->dato=dato;
  }return nuevoNodo;
}

//funciones prototipo
int menu();
Nodo *crearNodo(int dato);
int checker();
int insertar();
void preOrden();
void inOrden();
void postOrden();
int main(void) {
int opcion;
Nodo *raiz =NULL;
while(opcion<6){
opcion= menu();
  switch(opcion) {
    case 1:
    printf("\nElegiste insertar\n");
    printf("Ingresa un numero: ");
    scanf("%d", &dato);
    //gecth();
    //int swap=0;
    //checker(raiz,dato);
    if (checker(raiz,dato)==1){
    printf("\nEl numero %d esta repetido ",dato);
    }
    else{
    printf("\nEl numero %d se insertara ",dato);
    insertar(&raiz,dato);
    //opcion=0;
    }
    break;
    case 2:
    printf("\nimprimiendo preorden :\n ");
    preOrden(raiz);
    break;
    case 3:
    printf("\nimprimiendo inorden :\n ");
    inOrden(raiz);
    break;
    case 4: 
    printf("\nimprimiendo postorden :\n ");
    postOrden(raiz);
    break;
    case 5:
    printf("\nHasta la proxima\n");
    return 0;
    break;
    default:
    printf("\nElige una opcion valida\n");
    }getchar();
    }
    }
int menu(){
    int opcion;
    printf("\033[0;32m");
    printf("\nElige una opcion por favor\n");
    printf("\n1. Insertar numero\n");
    printf("\n2. Imprimir preorden\n");
    printf("\n3. Imprimir Inorden\n");
    printf("\n4. Imprimir Postorden\n");
    printf("\n5. Fin\n");
    printf("\033[0m");
    scanf("%d",&opcion);  
    return opcion;
}
//funcion para checar si esta repetido
int checker(struct Nodo *raiz, int dato_checado){
if(raiz == NULL){
  return 2; //no hagas nada
}
else if (raiz->dato == dato_checado){
  return 1; //se repite
}
else if (dato_checado< raiz->dato){
return checker (raiz->izquierda,dato_checado);//checa izq

}
else{
  return checker(raiz->derecha,dato_checado);//checader
 
}
//funcion para insertar y saber hacia donde insertar
}
int insertar(Nodo **punteroArbol, int dato){
  Nodo *arbol = *punteroArbol;
  if(arbol==NULL){
    *punteroArbol=crearNodo(dato);
    return 1; 
  }
  else if(dato==arbol->dato){//si son iguales
    return 0;
  }
  else if(dato<arbol->dato){// si el dato es menor a lo que estaba
    return insertar(&(arbol->izquierda),dato);
  }
  else{
    return insertar(&(arbol->derecha),dato);
  }
}
void preOrden(struct Nodo *raiz){
  if(raiz!=NULL){ //si no esta vacio, hacer...
  printf(" %d " , raiz->dato);
  preOrden(raiz->izquierda);
  preOrden(raiz->derecha);
  }
}
void inOrden(struct Nodo *raiz){
  if(raiz!=NULL){ 
  printf(" %d " , raiz->dato);
  inOrden(raiz->derecha);
  }
}
void postOrden(struct Nodo *raiz){
  if(raiz!=NULL){ 
  postOrden(raiz->derecha);
  printf(" %d " , raiz->dato);
  }
}