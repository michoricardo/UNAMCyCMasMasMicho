#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ordenMatriz;
void generateSquare(int n)
{
  cout<<"\033[1m\033[35m"<<endl;
    int matrizCuadrado[n][n];
    //llena la matriz con ceros
    memset(matrizCuadrado, 0, sizeof(matrizCuadrado));
    int i = n / 2;
    int j = n - 1;
    cout<<"Se inicializa en la posición"<<"("<<i<<","<<j<<") siendo la posición (0,0) es la superior izquierda"<<endl;
      for (int num =1; num<=n*n;){
        if (i == -1 && j == n) //tercera condicion
        {
            cout<<"\033[1m\033[34m"<<endl;
            cout<<"como i = "<<i<<" y j ="<<n<<endl;
            cout<<"i = "<<0<<", j = "<<n-2<<endl;
            j = n - 2;
            i = 0;
            cout<<"\033[0m"<<endl;
        }
        else {
          //si el sig numero se sale del lado derecho del cuadro
            cout<<"como j = n ="<<n<<endl;
            cout<<"j = "<<0<<endl;
            if (j == n)
                j = 0;
           //Si el siguiente numero se sale de la parte superior del cuadrado 
            if (i < 0)
                i = n - 1;
                cout<<"como i<0,i ="<<"n-1 es decir: "<<n-1<<endl;
        }
        if (matrizCuadrado[i][j]) //segunda condicion
        {
          cout<<"El punto en la posicion i= "<<i<<" y j = "<<j<<"ya está elegido, entonces:"<<endl;
          cout<<"j antes: "<<j<<" j despues: "<<j-2<<" i antes = "<<i<<"i despues: "<<i+1<<endl;
            j -= 2;
            i++;
            continue;
        }
        else
            matrizCuadrado[i][j] = num++; //como no estaba el numero, se setea en el cuadrado
 
        j++;
        i--; //condicon 1
    }
 
    cout<<"\033[0m"<<endl;
    //impresion de cuadrado
    cout<<"\033[1m\033[33m"<<endl;
    cout << "El cuadrado magico de orden n=" << n
         << ":\nCada columna, fila o diagonal debe sumar: "
         << n * (n * n + 1) / 2 << ":\n\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)

            cout << setw(3) << matrizCuadrado[i][j] << " ";
        cout << endl;
    }
}
 

int main()
{
cout<<"\033[1m Por favor escribe el orden impar del cuadrado magico\033[32m"<<endl;
cout<<"Puede ser 3,5,7,9"<<endl;
cout<<"\033[0m"<<endl;
cin>>ordenMatriz;
generateSquare(ordenMatriz);
return 0;
}