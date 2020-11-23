#include <stdio.h>
#include<stdlib.h>
int numero_modificar =10;
int number;
int falseboolean=0;

void menu() {
  printf("Modifiquemos un numero\n");
  printf(" \n");
  printf(" \n");
  printf(" \n");
	printf("Menu:\n  1. Elegir un numero\n  2. Incremento en una unidad\n  3. Decremento en una unidad\n  4. Salir (con despedida)\n");
       return;}
void elegir(){
  scanf("%d", &number);
  printf("\033[1;36m elegiste %d\033[0m\n",number);
  numero_modificar=number;
  falseboolean= 1;
  return; 
}
void decremento(){
  if(falseboolean ==0)
  {
      printf("\033[0;36m No comenzaste eligiendo, comenzaremos con el numero 10 \033[0m\n");
      printf(" \n");
      falseboolean=2;
  }
  numero_modificar=numero_modificar-1;
  printf("\033[0;36mAhora tienes %d \033[0m\n",numero_modificar);
  printf(" \n");

}
void incrementar(){
    if(falseboolean ==0)
  {
      printf("\033[01;33mNo comenzaste eligiendo, comenzaremos con el numero 10 \033[0m\n");
      printf(" \n");
      falseboolean=2;
  }
  numero_modificar=numero_modificar+1;
  printf("\033[01;33m");
	printf("Ahora tienes %d \n",numero_modificar);
  printf("\033[0m\n");
}

int main(void) {
    int opcion;
     do {
        menu();
        scanf("%d", &opcion);       
  switch(opcion)
  {
    case 1:
    printf("\033[1;36m Elegir un numero\033[0m\n");
    elegir();
    break;
    case 2:
    printf("\033[01;33mIncrementar en una unidad\033[0m\n");
    incrementar();
    break;
    case 3:
    printf("\033[0;36mDecrementar en una unidad\033[0m\n");
    decremento();
    printf(" \n");
    break;
    case 4:
    printf("Fue un placer, ADIOS ;)\n");
    break;
  }
  } while (opcion>=1 && opcion<4);
 
  return 0;
}