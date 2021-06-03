#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int tamano,x;
int arr[20];
int intArreglo[20];
void selectionSort();
void randomGen();
void printResult();
int main() {
randomGen();
selectionSort(arr);
printResult();



}
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

void randomGen(){
      //Se generan 10 números aleatorios con 100 como máximo 
    srand(time(NULL));
    //impresión del arreglo desordenado
    printf(" \n");
    printf("Arreglo de 20 números desordenado\n");
    printf(" \n");
    for(x=0;x<20;x++){
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

void printResult(){
    printf("Arreglo de 20 números ya ordenado\n");
    for(int y=0; y<20; y++){
    printf("%d ",arr[y]);}
    printf(" \n");
    printf("===========================================\n");
    }
