#include <stdio.h>
#include<stdlib.h>
void menu() {
  printf("\033[01;33m");
  printf("Bienvenido al juego matematico\n");
  printf(" \n");
	printf("Menu:\n1. Calcular GCD de dos numeros\n2. Salir (con despedida)\n");
  printf("\033[0m\n");
       return;}
  void gcd(){
    printf("\033[1;36m");
    //int num1, num2, i, gcd;
    float prev1,prev2;
    int num1, num2, i, gcd;
    
    printf("Introduce un numero entero:\n ");
    scanf("%f", &prev1);
    num1=(int)prev1;
    printf("Introduce otro numero entero:\n ");
    scanf("%f", &prev2);
    printf("Si escogiste numeros decimales se transformaran a enteros ;)\n");
    num2=(int)prev2;
    for(i=1; i <= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    printf("El GCD de %d y %d es %d", num1, num2, gcd);
    printf("\033[0m\n");
    return;

  }
int main(void) {
    int opcion;
     do {
        menu();
        scanf("%d", &opcion);       
  switch(opcion)
  {
    case 1:
    printf("\033[1;36m Elegiste GDC \033[0m\n");
    gcd();
    break;
    case 2:
    printf("Fue un placer, ADIOS ;)\n");
    break;
    default :
    printf("Eso no es una opcion! xD\n");
  }
  } while (opcion>=1 && opcion<2);
  return 0;
}