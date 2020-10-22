#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int opt=0;
float A,B,C;
void continuar() {
  char eleccion;
  printf("\nDeseas continuar jugando? 'S' para 'Si' o 'N' para 'No' \n");
  scanf(" %c", &eleccion);
  printf("\n Elegiste : %c\n", eleccion);
  if(eleccion=='s'||eleccion=='S'){
    printf("=========================================\n");
  }
  else{
      printf("\n Nos vemos pronto! ;) \n");
    opt=2;
  }
  printf("\n");
return;}
void explicacion() {
  printf("Calculemos la formula general\n");
  printf("\nUna ecuación cuadrática es una ecuación con la forma Ax^2 + BX + C = 0\n");
  printf(" \n");
  return;}
void calculo(float A,float B,float C){
  if(A==0){
    printf("Esta función no es cuadratica!\n");
  }
  else if((B*B)<(4*A*C))
  {
    printf("Raíces imaginarias!\n");
    printf("El resultado es: \n");
    float iprimera=fabs((B*B)-(4*A*C));
    float iprimerasq_2= (sqrt(iprimera))/2*A;
    float noraiz= -B/2*A;
    printf("X1 = %.1f+%.1fi\n",noraiz,iprimerasq_2);
    printf("X2 = %.1f-%.1fi\n",noraiz,iprimerasq_2);
  }
  else{
    printf("La redondeamos a 1 decimal para imprimirla, pero en el cálculo se consideran las variables\n");
    printf("La función queda: \n%.1fx^2 +%.1fx +%.1f=0\n",A,B,C);
    printf("La formula general queda: \n -%.1f+-(√(%.1fx^2-4*%.1f*%.1f))/(2*%.1f)\n",B,B,A,C,A);
    float raiz= sqrt((B*B)-(4*A*C));
    float res1 = (-B+raiz)/(2*A);
    float res2 = (-B-raiz)/(2*A);
    printf("Valor de X1: %.1f\n",res1);
    printf("Valor de X2: %.1f\n",res2);
  }
  return;
}
int main(void) {
do{
explicacion();
printf("Por favor elige los coeficientes de 'A','B' y 'C'\n");
printf("Introduce 'A': ");
scanf("%f", &A);
printf("Introduce 'B': ");
scanf("%f", &B);
printf("Introduce 'C': ");
scanf("%f", &C);
printf("\n'A'%.1f ,'B'%.1f,'C'%.1f'\n",A,B,C);
calculo(A,B,C);
//cuerpo del programa
continuar();
}while(opt<1);
  return 0;
}