#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int invertido;
int x,temporal;
//http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/
void menu() {
  printf("Bienvenido al juego de los numeros\n");
  printf(" \n");
  printf(" \n");
  printf("Elige una opcion y pulsa su numero:\n ");
  printf(" \n");
	printf("Menu:\n  1. Ordenar 10 numeros enteros\n  2. Imprimir los primeros 5 numeros perfectos\n  3. invertir numero de 6 digitos (o menos)\n  4. Salir (con despedida)\n");
       return;}
void printResult(int arr[10]){
    printf("Arreglo de 10 números ya ordenado\n");
    for(int y=0; y<10; y++){
    printf("%d ",arr[y]);}
    printf(" \n");
    printf("===========================================\n");
    }
void burbuja(int arreglo1[10]){
      for (int i =0; i<9; i++){
        for(int z=0; z<9; z++){
            if(arreglo1[z]>arreglo1[z+1]){
                temporal = arreglo1[z+1];
                arreglo1[z+1] = arreglo1[z];
                arreglo1[z]= temporal;
            }
        }
    }

  printResult(arreglo1);
}
void ordenar(){
  printf("\033[1;36m");
  printf("\nPor favor escribe 10 numeros ENTEROS\n");
  int a, b, c, d, e, f, g, h, i, j;
  scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
   int usernum[10]= {a, b, c, d, e, f, g, h, i, j
  };
  burbuja(usernum);
  printf("\033[0m\n");
}
void perfectos(){
  printf("\033[01;33m");
  printf("Se imprimiran algunos numeros perfectos calculados\n");		
			long p [9] = {2,3,5,7,13, 17, 19, 31};
			long x; 
      long y;
			for (y=0; y<8; y++)
						{x=(pow(2,p[y]-1))*(pow(2,p[y])-1);
						printf("Numero perfecto %ld : %ld \n",y+1,x);	
			}
  printf("\033[0m\n");
}
void invertir(){
printf("\033[0;36mEscribe un numero de 6 digitos\n");       
			int numero;
			scanf ("%d",&numero);
      printf("El numero invertido es:\n");  
			do {printf("%d",numero%10);
			numero /=10;
			}while (numero>=6);
			printf("%d",numero);

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
    printf("\033[1;36m Elegiste ordenar 10 numeros enteros \033[0m\n");
    ordenar();
    break;
    case 2:
    printf("\033[01;33mElegiste imprimir los primeros 5 numeros perfectos\033[0m\n");
    perfectos();
    break;
    case 3:
    printf("\033[0;36mElegiste invertir numero de 6 digitos\033[0m\n");
    invertir();
    printf(" \n");
    break;
    case 4:
    printf("Fue un placer, ADIOS ;)\n");
    break;
  }
  } while (opcion>=1 && opcion<4);
 
  return 0;
}
