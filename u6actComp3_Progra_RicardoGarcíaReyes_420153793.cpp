#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
char apellido_pat[20],apellido_mat[20],nombre[20],rfc[30],f_nac[20],*puntero_apellido_pat,*puntero_apellido_mat,*puntero_nombre,*punterof_nac;
main()
{
	cout<<"Calcularemos un RFC"<<endl;
	cout<<"Ingresa el apellido paterno"<<endl;
	gets(apellido_pat);
	puntero_apellido_pat=apellido_pat;
	//en este caso no tenemos que usar la notacion de *puntero para acceder al contenido
	cout<<"Ingresa el apellido materno: "<<endl;
    gets(apellido_mat);
    puntero_apellido_mat=apellido_mat;
    cout<<"Ingresa el nombre "<<endl;  
    gets(nombre);
    puntero_nombre=nombre;
    cout<<"Ingresa tu fecha de nacimiento < aa/mm/dd >"<<endl;
    gets(f_nac);
    punterof_nac=f_nac;
    strupr(apellido_pat);
    strupr(apellido_mat);
    strupr(nombre);
    rfc[0] = puntero_apellido_pat[0];
    rfc[1] = puntero_apellido_pat[1];
    rfc[2] = puntero_apellido_mat[0];
    rfc[3] = puntero_nombre[0];
    strcat(rfc, f_nac); //se une la parte calculada y el rfc 
    cout<<"Su nombre es: "<<puntero_nombre<<" "<<puntero_apellido_pat<<" "<<puntero_apellido_mat<<" "<<endl;
    cout<<"Su fecha de nacimiento es: "<<punterof_nac<<endl;
    cout<<"Su RFC es: "<<rfc<<endl;
    cout<<"OJO: en este caso no tenemos que usar la notacion de *puntero para acceder al contenido al usar la funcion GETS()"<<endl;
    getch();

}
