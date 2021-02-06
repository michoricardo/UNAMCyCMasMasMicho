#include <iostream>
#include <math.h>
using namespace std;
int n = 0,*puntero_n,periodos[100],*puntero_periodos;
float io = 0, vpn = 0, k = 0,*puntero_io,*puntero_vpn,*puntero_k,arreglo_valores[100];
void explain();
void pedir();
void periods(int num_per);
void calcularVPN(int num_per);
int main() {
explain();
pedir();
puntero_periodos = periodos;

}

void explain(){
  cout<<"Se calculará el VPN (Valor presente neto)"<<endl;
  cout<<"Se hará a partir de: \nuna inversion inicial (Io)\nun numero de periodos(n)\nuna tasa de descuento (K)\nflujos de efectivo en cada periodo"<<endl;
}
void pedir(){
  cout<<"\nFavor de ingresar la inversion inicial (Io)"<<endl;
  cin>>io;
  puntero_io=&io;
  cout<<"memoria "<<puntero_io<<endl;
  cout<<"contenido "<<*puntero_io<<endl;
  cout<<"Favor de ingresar los periodos"<<endl;
  cin>>n;
  puntero_n=&n;
  cout<<"Favor de ingresar la tasa de descuento en punto decimal(K) (no porcentaje)"<<endl;
  cin>>k;
  puntero_k=&k;
  periods(n);
  calcularVPN(n);
}
void periods(int num_per){
for (int x=0; x<num_per; x++){
cout<<"Ingresa el flujo de efectivo para el periodo "<<x+1<<" "<<endl;
cin>>periodos[x];
arreglo_valores[x]= (periodos[x]/pow(1+k,x+1));

}
cout<<"Calculando valores intermedios :"<<endl;
}
void calcularVPN(int num_per){
vpn += *puntero_io;
cout<<"vpn antes de: "<<endl;
for(int x=0; x<num_per; x++){
  vpn+=arreglo_valores[x];
  cout<<"valor de la iteración actual : "<<vpn<<endl;
}
cout<<"valor final: "<<vpn<<endl;
}