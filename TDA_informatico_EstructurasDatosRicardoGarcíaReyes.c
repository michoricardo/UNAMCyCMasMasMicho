/*Estructuras de datos Ricardo Garcia 420153793*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <stdbool.h> //para permitir booleanos
#include <string.h> //se tiene que agregar para poner un nombre

int main(void) {
    imprimir();
    reconocer_objetivo();
    analizar_vulnerabilidades();
    explotar_vulnerabilidades();
    reportar();
    return EXIT_SUCCESS;
}

struct InformaticoStruct{
  char nombre[50];
  int edad;
  bool conocimiento_informatico;
  bool curiosidad;
};

Informatico hacer(){
  int numero = 26;
  bool conocimiento_informatico=true;
  bool curiosidad=true;
  struct InformaticoStruct* hacker =malloc(sizeof(struct InformaticoStruct));
  strcpy(hacker->nombre,"Ricardo");
  hacker->edad = numero;
  hacker->conocimiento_informatico = conocimiento_informatico;
  hacker->curiosidad=curiosidad;
  return hacker;
}

Informatico imprimir(){
  printf("Ejecutando la funcion para crear tipo de informatico\n");
  Informatico hacker=hacer();
  printf("\n Se creo un informatico hacker");
  printf("\n La edad es: %d",hacker->edad);
  printf("\n El nombre es: %s",hacker->nombre);
  printf("\n Su conocimiento informatico? (1 verdadero/0 falso): %d",hacker->conocimiento_informatico);
  printf("\n Tiene curiosidad? (1 verdadero/0 falso) : %d\n",hacker->conocimiento_informatico);
  return 0;
}
Informatico reportar(){
  printf("\033[1;36m");
  printf("\nGenerando reporte...\n");
  printf("\033[0m\n");
  return 0;
}
Informatico reconocer_objetivo(){
  printf("\033[01;33m");
  printf("\nUtilizando Google...\n");
  printf("\nUtilizando Maltego...\n");
  printf("\nObjetivo conocido...\n");
  printf("\033[0m\n");
  return 0;
}

Informatico analizar_vulnerabilidades(){
  printf("\033[0;31m");
  printf("\nUtilizando NMAP...\n");
  printf("\nUtilizando Nikto...\n");
  printf("\nVulnerabilidades encontradas...\n");
  printf("\033[0m\n");
  return 0;
}
Informatico explotar_vulnerabilidades(){
  printf("\033[0;35m");
  printf("\nEncontrando script correspondiente con Metasploit...\n");
  printf("\nPayload listo...\n");
  printf("\n******Ejecutando******\n");
  printf("\033[0m\n");
  return 0;
}






 