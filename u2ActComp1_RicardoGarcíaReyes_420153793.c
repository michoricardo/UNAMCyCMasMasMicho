#include <stdio.h>    
#include<stdlib.h>
#include<time.h>

int arrnum20[100];
void numerosRandomVeinte(){
  for(int p=0; p<100;p++){
    //calculando un numero random
    int random=rand()%20+1;
    arrnum20[p] = random;

  }
    for(int p=0; p<100;p++){
    //calculando un numero random
    printf(" %d ",arrnum20[p]);
  }
  printf(" \n"); 
}

int main()    
{    
    numerosRandomVeinte();  
    int length = sizeof(arrnum20)/sizeof(arrnum20[0]);     
    int fr[length];    
    int contado = -1;    
    //se hace un for el numero de veces del arreglo
    for(int i = 0; i < length; i++){
        //la cuenta comienza en 1    
        int count = 1;    
        //empieza en+ j+1 porque sino seria cero
        for(int j = i+1; j < length; j++){
            //si los numeros son iguales    
            if(arrnum20[i] == arrnum20[j]){    
                count++;//Para evitar contar de nuevo el elemento
                //El indice se marca como contado   
                fr[j] = contado;    
            }    
        } 
        //  
        if(fr[i] != contado)    
            fr[i] = count;    
    }         
   //Tabla  
    printf("---------------------\n");    
    printf(" Número--->Frecuencia\n");    
    printf("---------------------\n");    
    for(int i = 0; i < length; i++){    
        if(fr[i] != contado){    
            printf("       %d", arrnum20[i]);    
            printf("--->");    
            printf("%d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}    