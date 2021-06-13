#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int opcion,dato,datiki;
struct nodo {
    int info;
    struct nodo *izq;
    struct nodo *der;
};

struct nodo *raiz=NULL;
void insertar(int x);
void imprimirPre(struct nodo *reco);
void imprimirEntre(struct nodo *reco);
void imprimirPost(struct nodo *reco);
void borrar(struct nodo *reco);
bool busqueda(struct nodo *reco, int n);
void buscando();
int menu();
void insertar(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        struct nodo *anterior, *reco;
        anterior = NULL;
        reco = raiz;
        while (reco != NULL)
        {
            anterior = reco;
            if (x < reco->info)
                reco = reco->izq;
            else
                reco = reco->der;
        }
        if (x < anterior->info)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}

void imprimirPre(struct nodo *reco)
{
    if (reco != NULL)
    {
        printf("%i-",reco->info);
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}


void imprimirEntre(struct nodo *reco)
{
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        printf("%i-",reco->info);
        imprimirEntre(reco->der);
    }
}

void imprimirPost(struct nodo *reco)
{
    if (reco != NULL)
    {
        imprimirPost(reco->izq);
        imprimirPost(reco->der);
        printf("%i-",reco->info);
    }
}

void borrar(struct nodo *reco)
{
    if (reco != NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        free(reco);
    }
}

bool busqueda(struct nodo *reco, int n){
  if(reco ==NULL){
    //printf("NULL\n");
    return false; //no se encuentra
  }
  else if(reco->info ==n){//si el nodo es igual al elemento
    //printf("SIMON SISE ENCONTRO \n");
    return true;
  }
  else if(n < reco->info){
    //printf("n < reco->info \n");
    return busqueda(reco->izq,n); //busca por el lado izq
  }
  else{
    //printf("n > reco->info \n");
    return busqueda(reco->der,n);
  }
}

int main()
{
  while(opcion<7){
opcion= menu();
  switch(opcion) {
    case 1:
    printf("\nElegiste insertar\n");
    printf("Ingresa un numero: ");
    scanf("%d", &dato);
    insertar(dato);
    break;
    case 2:
    printf("\nimprimiendo preorden :\n ");
    printf("Impresion preorden: ");
    imprimirPre(raiz);
    printf("\n\n");
    break;
    case 3:
    printf("\nimprimiendo inorden :\n ");
    printf("Impresion inorden: ");
    imprimirEntre(raiz);
    printf("\n\n");
    break;
    case 4: 
    printf("\nimprimiendo postorden :\n ");
    printf("Impresion postorden: ");
    imprimirPost(raiz);
    break;
    case 5:
    printf("\nBuscar!! \n ");
    buscando();
    break;
    case 6:
    printf("\nBorrar!! \n ");
    borrar(raiz);
    break;
    case 7:
    printf("\nHasta la proxima\n");
    return 0;
    break;
    default:
    printf("\nElige una opcion valida\n");
    }getchar();
    }
    return 0;
}
int menu(){
    int opcion;
    printf("\033[0;32m");
    printf("\nElige una opcion por favor\n");
    printf("\n1. Insertar numero\n");
    printf("\n2. Imprimir preorden\n");
    printf("\n3. Imprimir Inorden\n");
    printf("\n4. Imprimir Postorden\n");
    printf("\n5. Buscar elemento\n");
    printf("\n6. Borrar arbol\n");
    printf("\n7. Salir\n");
    printf("\033[0m");
    scanf("%d",&opcion);  
    return opcion;
}
void buscando(){
    printf("\nQue dato quieres buscar en el arbol ");
    scanf("%d",&datiki);
    if(busqueda(raiz,datiki)==true){
      printf("Se encontro el dato! :) \n");

    }
    else{
      printf("No se encontro el dato :( ");
      
    }
}