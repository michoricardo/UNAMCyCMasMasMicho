#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int tamano;
//función quick sort
void quicksortear(int arreglo[],int limIzq,int limDer){
  int indiceIzquierdo,indiceDerecho,aux,piv;
  int indiceIzq=limIzq;
  int indiceDer=limDer;
  //pivote = índice de lista a la mitad
  piv=arreglo[(indiceIzq+indiceDer)/2];
  printf("El pivote es: ");
  printf("%d", piv);
  printf(" \n");
  do{//ir hacia centro en indice izquierdo
    while(arreglo[indiceIzq]<piv && indiceIzq<limDer) indiceIzq++;
    //ir hacia centro en indice derecho
    while(piv<arreglo[indiceDer] && indiceDer>limIzq) indiceDer--; 
    //si el índice es menor o igual al otro índice
    if(indiceIzq<=indiceDer)
    {
      //se guarda en variable temporal
      aux=arreglo[indiceIzq];
      //se cambia el valor del indice izquierdo hacia el indice derecho
      arreglo[indiceIzq]=indiceDer;
      arreglo[indiceIzq]=arreglo[indiceDer];
      arreglo[indiceDer]=aux;
      indiceIzq++;
      indiceDer--;
    }
  } while(indiceIzq<=indiceDer);
  if(limIzq<indiceDer){
        quicksortear(arreglo,limIzq,indiceDer);}
  if(limDer>indiceIzq){
    quicksortear(arreglo,indiceIzq,limDer);}
 return;
}
void trigger (int arreglo[],int size){
  quicksortear(arreglo,0,size-1);
}

int main(void) {
    //Se generan 10 números aleatorios con 100 como máximo
    int x,arr[10],temporal;
    srand(time(NULL));
    for(x=0;x<10;x++){
    arr[x]=rand()%100;
    printf("%d ",arr[x]);
    }
    //impresión del arreglo desordenado
    printf(" \n");
    printf("Arreglo de 10 números desordenado\n");
    //calculo de la longitud del arreglo *no tamaño en bytes
    tamano = sizeof(arr)/sizeof(int);
    printf("La longitud del arreglo es: ");
    printf("%d",tamano);
    printf(" \n");
    //mando a llamar al trigger del quicksort mediante otra funcion
    trigger(arr,tamano);
    printf(" \n");
    printf("Arreglo de 10 números ya ordenado\n");
    for(int y=0; y<10; y++){
        printf("%d ",arr[y]);
    }
  return 0;
}

  