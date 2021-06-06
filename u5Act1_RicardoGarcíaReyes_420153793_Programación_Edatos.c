#include <stdio.h>
int inserted;
int pares[100];
int opcion,numero,i,buscador;
int menu();
void insertar();
void buscar();
int main() {
  while(opcion<3){
  opcion= menu();
  switch(opcion) {
    case 1:
    printf("\nElegiste Insetar dato\n");
    insertar();
    break;
    case 2:
    printf("\nElegiste Buscar dato :\n ");
    buscar();
    break;
    case 3:
    printf("\nHasta la proxima\n");
    return 0;
    break;
    default:
    printf("\nElige una opcion valida\n");
    }
    }
 
return 0;
}
int menu(){
    int opcion;
    printf("\033[0;32m");
    printf("\nElige una opcion por favor\n");
    printf("\n1. Insertar numero\n");
    printf("\n2. Buscar numero\n");
    printf("\n3. Salir\n");
    printf("\033[0m");
    scanf("%d",&opcion);  
    return opcion;
}
void insertar(){
int insercion;
printf("¿Que numero quieres insertar?: \n");
scanf("%d", &insercion);
pares[inserted]= insercion;
printf("%d insertado! \n",insercion);
getchar();
inserted++;

}
void buscar(){
 //mostramos la lista
  for(i=0;i<=inserted-1;i++){
    printf("%d ",pares[i]);
  }
  printf("\n");
  //solicitamos numero
  printf("¿Que numero quieres buscar?: \n");
  scanf("%d", &numero);
  for(i=0; i<=inserted-1; i++){
    if(pares[i] == numero){
      buscador = i;
      break;
    }
    else{
      buscador = -1;
    }//fin for
    
  }if(buscador ==-1){
    printf("El numero no fue encontrado: \n");
    }
    else{
      printf("El numero fue encontrado en la posicion [%d]\n",buscador);
    }
}