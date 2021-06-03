#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int tamano;
int x,arr[20],temporal;
void randomGen();
void menu();
void selectionSort();
int bluesort();
void randomGen(){
      //Se generan 10 números aleatorios con 100 como máximo 
    srand(time(NULL));
    //impresión del arreglo desordenado
    printf("\033[1;31m");
    printf(" \n");
    printf("Arreglo de 20 números desordenado\n");
    printf(" \n");
    for(x=0;x<20;x++){
    arr[x]=rand()%100;
    printf("%d ",arr[x]);
    }
    printf(" \n");
    printf("\033[0m");
   
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
	printf("Menu:\n  1. Burbuja\n  2. Insercion directa\n  3. seleccion\n  4. Salir (con despedida)\n");
       return;}
void selectionSort(int intArreglo[]){
  int indiceMin, i,j;
  int temp;
  
//ciclo para operar sobre cada elemento del arreglo
for(i=0; i<tamano; i++){
//el elemento actual es el minimo
indiceMin=i;
//buscar el elemento menor en todo el arreglo
for(j=i+1; j<tamano;j++){
if(intArreglo[j]<intArreglo[indiceMin]){
  indiceMin=j;
}}
//El siguiente bloque, realiza el intercambio de los valores
if(indiceMin != i){
  temp= intArreglo[indiceMin];
  intArreglo[indiceMin] = intArreglo[i];
  intArreglo[i]=temp;

}
}//for
}//void selectionSort
void insercionDirecta(){
			int w, temporal2;
        //  20 veces       
  			for (w=0;w<20;w++)
        //valor en indice w hacia temporal
  				{temporal2 = arr[w];
        //Se comparan elementos hasta llegar a su lugar
  				while ((w>0)&&(temporal2< arr[w-1]))
   					{arr [w]= arr [w-1]; w--;}
   				arr [w]=temporal2;
   				}
      }
int bluesort(int A[],int N){
  //llamada(arr,tamano)
  int i,j,AUX;
  for(i=0;i<(N-1);i++){
    for(j=0;j<(N-i-1);j++){
      if(A[j-1]>A[j]){
        AUX=A[j-1];
        A[j-1]=A[j];
        A[j]=AUX;
      }
    }
  }
  return 1;
}

void printResult(){
    printf("\033[1;32m");
    printf("Arreglo de 20 números ya ordenado\n");
    for(int y=0; y<20; y++){
    printf("%d ",arr[y]);}
    printf(" \n");
    printf("===========================================\n");
    printf("\033[0m");
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
    bluesort(arr,tamano);
    printResult();
    break;
    case 2:
    printf("Elegiste ordenar por insercion directa \n");
    insercionDirecta();
    printResult();
    break;
    case 3:
    printf("Elegiste ordenar seleccion \n");
    selectionSort(arr);
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