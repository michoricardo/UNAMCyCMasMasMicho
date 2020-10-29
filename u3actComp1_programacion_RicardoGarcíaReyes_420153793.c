//para imprimir en colores 
//http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int opt=0,dado1,dado2,suma,flag=0;
char apuesta;
void explicacion(){
printf("\033[1;36mBienvenido al juego de Chicos y grandes!\033[0m\n\n");
printf("\033[1;36mTienes dos dados con números del 1 al 6\033[0m\n");
printf("\033[1;36mPuedes hacer una apuesta por 'Chicos' o 'Grandes'\033[0m\n");
printf("\033[1;36mLa suma máxima de tus dados será 12 y la mínima será 2\033[0m\n");
printf("\n");
printf("\033[1;32mSi la suma de tus dos dados es menor a 7, los chicos ganan\033[0m\n");
printf("\033[1;32mSi la suma de tus dos dados es mayor a 7, los grandes ganan\033[0m\n");
printf("\033[1;32mSi la suma de tus dos dados es igual a 7, la casa gana\033[0m\n");
return;}
void apostar(){
printf("\n\033[1;35mLanza una apuesta... Escribe 'C' para CHICOS o 'G' para GRANDES\033[0m\n");
scanf(" %c", &apuesta);

return;}
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
void lanzaDados(){
srand(time(NULL));
dado1=rand()%6+1;
dado2=rand()%6+1;
suma=dado1+dado2;

printf("\033[0;33mPrimer dado: %d\033[0m\n",dado1);
printf("\033[0;33mSegundo dado: %d\033[0m\n",dado2);
printf("\033[0;33mLa suma de ambos es: %d\033[0m\n\n",suma);

} 
void comparacion(){
if ((suma<7 && apuesta == 'c')||(suma<7 && apuesta == 'C')){
  printf("\033[1;31mGANASTE! CHICOS GANAN! \033[0m\n");
}
else if ((suma>7 && apuesta == 'c')||(suma>7 && apuesta == 'C')){
  printf("\033[1;31mPERDISTE GRANDES GANAN! \033[0m\n");
}
else if ((suma<7 && apuesta == 'g')||(suma<7 && apuesta == 'G')){
  printf("\033[1;31mPERDISTE! CHICOS GANAN! \033[0m\n");
}
else if ((suma>7 && apuesta == 'g')||(suma>7 && apuesta == 'G')){
  printf("\033[1;31mGANASTE! GRANDES GANAN! \033[0m\n");
}
else if (suma == 7){
  printf("\033[1;31mLA CASA GANA! \033[0m\n");
}
else{
  printf("\033[1;31mNo entendí tu apuesta :( \033[0m\n");
  flag=1;
}

return;}
int main(void) {

do{
flag=0;
explicacion();
apostar();
lanzaDados();
if (flag==0){
  comparacion();
}
continuar();
}while(opt<1);
  return 0;
}