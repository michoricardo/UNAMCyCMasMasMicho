#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int tamano;
int x,arr[10],temporal;
void randomGen(){
      //Se generan 10 números aleatorios con 100 como máximo 
    srand(time(NULL));
    //impresión del arreglo desordenado
    printf(" \n");
    printf("Arreglo de 10 números desordenado\n");
    printf(" \n");
    for(x=0;x<10;x++){
    arr[x]=rand()%100;
    printf("%d ",arr[x]);
    }
    printf(" \n");
   
    //calculo de la longitud del arreglo *no tamaño en bytes
    tamano = sizeof(arr)/sizeof(int);
    printf("La longitud del arreglo es: ");
    printf("%d",tamano);
    printf(" \n");
    //mando a llamar al trigger del quicksort mediante otra funcion
}
void menu() {
  printf("Bienvenido al juego de ordenación de números\n");
  printf(" \n");
  randomGen();
  printf(" \n");
  printf("¿Por que metodo deseas ordenarlo?:\n ");
  printf(" \n");
	printf("Menu:\n  1. Burbuja\n  2. Insercion directa\n  3. QuickSort\n  4. Salir (con despedida)\n");
       return;}

void insercionDirecta(){
			int w, temporal2;
        //  10 veces       
  			for (w=0;w<10;w++)
        //valor en indice w hacia temporal
  				{temporal2 = arr[w];
        //Se comparan elementos hasta llegar a su lugar
  				while ((w>0)&&(temporal2< arr[w-1]))
   					{arr [w]= arr [w-1]; w--;}
   				arr [w]=temporal2;
   				}
      }

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
void burbuja(){
      for (int i =0; i<10; i++){
        for(int z=0; z<10 ;z++){
            if(arr[z]>arr[z+1]){
                temporal = arr[z+1];
                arr[z+1] = arr[z];
                arr[z]= temporal;
            }
        }
    }
}
void printResult(){
    printf("Arreglo de 10 números ya ordenado\n");
    for(int y=0; y<10; y++){
    printf("%d ",arr[y]);}
    printf(" \n");
    printf("===========================================\n");
    }

int main(void) {
    int opcion;
     do {
        menu();
        scanf("%d", &opcion);
        
  switch(opcion)
  {
    case 1:
    printf("Elegiste ordenar por burbuja\n");
    burbuja();
    printResult();
    break;
    case 2:
    printf("Elegiste ordenar por inserción directa\n");
    insercionDirecta();
    printResult();
    break;
    case 3:
    printf("Elegiste ordenar por QuickSort\n");
    trigger(arr,tamano);
    printf(" \n");
    printResult();
  
    printf(" \n");
    break;
    case 4:
    printf("Fue un placer, ADIOS :)\n");
    break;
  }
  } while (opcion>=1 && opcion<4);
 
  return 0;
}