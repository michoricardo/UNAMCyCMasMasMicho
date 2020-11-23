//permutaciones rep
#include <bits/stdc++.h> 
using namespace std; 

//intercambio de posiciones del puntero
void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

//char *a es la cadena de strings
//inicia en 0
//termina en n-1
void permute(char *a, int inicio, int fin) 
{ 
	int i; 
	if (inicio == fin) 
		cout<<a<<endl; 
	else
	{ 
		for (i = inicio; i <= fin; i++) 
		{ 
			swap((a+inicio), (a+i)); 
			permute(a, inicio+1, fin); 
			swap((a+inicio), (a+i)); //backtrack 
		} 
	} 
} 

int main() 
{ 
	char archivos_carp[] = "ABCDE//"; 
	int n = strlen(archivos_carp); 
	permute(archivos_carp, 0, n-1); 
	return 0; 
} 
