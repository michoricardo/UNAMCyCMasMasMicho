#include <stdio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i,j,k,n,opcion;
char names[20][20]={"Los Beatles","Maroon 5","Avicii","Piso 21","Shakira","Artic Monkeys","The Killers","Calle 13","Camilo","Hombres G","Babasonicos","Ozuna","Bad Bunny","J Balvin","Aaron Watson","Brad Paisley","Manu Chao","Coldplay","Eminem","Kygo"};
int menu();
char temp[25];
char t[100];
int m = sizeof(names)/20;
int compareStr(const void *pa, const void *pb){
  return strcmp(pa,pb);

}
void quicky(){
  qsort(names,m,20,compareStr);
  printf("Se llamo a la funcion de quicksort:\n");
  for (int i=0; i<m ;i++){
    printf("%s \n", names[i]);
  }
}
void shelly(){
   for(i=0;i<=20;i++)
      for(j=i+1;j<=20;j++){
         if(strcmp(names[i],names[j])>0){
            strcpy(temp,names[i]);
            strcpy(names[i],names[j]);
            strcpy(names[j],temp);
         }
      }
   printf("Imprimiendo los nombres ordenados por shell:");
   for(i=0;i<=20;i++)
      puts(names[i]);
}




int main() 
{
while(opcion<3){
opcion= menu();
  switch(opcion) {
    case 1:
    printf("\nElegiste Ordenamiento Shell\n");
    shelly();
    printf("\n\n");
    break;
    case 2:
    printf("\nElegiste ordenamiento QuickSort\n ");
    quicky();
    printf("\n\n");
    break;
    case 3:
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
    printf("\n1. Ordenamiento Shell\n");
    printf("\n2. Ordenamiento QuickSort\n");
    printf("\n3. Salir\n");
    printf("\033[0m");
    scanf("%d",&opcion);  
    return opcion;
}

