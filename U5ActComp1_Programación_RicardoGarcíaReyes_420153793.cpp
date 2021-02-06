#include <iostream>
#include <string> //std::string std::to_string
using namespace std;
//funcion recursiva para imprimir subconjuntos
void print_subs(string input, string output){
  if(input.length()==0){
    cout<< output <<endl;
    return;
  }
print_subs(input.substr(1),output); 
print_subs(input.substr(1),output+input[0]);
}
int entrada;
string salida;
//funcion que toma el numero mas grande y prepara un string concatenado con sus consecutivos anteriores
void preparando(int num){
if(num <= entrada)
{
  //cout<<"numeroooo"<<endl;
  cout<<num<<endl;
  string s;
  int num_string = num;
  s.push_back((char)num_string+'0'); 
  salida= salida+(s);
  //cout<<"salida actual es: "<<salida<<endl;
  preparando(num+1);
}
} 
int main() {
string input;
cout<<"Escribe el numero para imprimir subconjuntos"<<endl;
cin>>entrada;
string output =""; //primera iteracion de output vacio
preparando(1); //primera iteracion con 1 como el numero mas pequeno
print_subs(salida,output); //salida viene de la funcion preparando y output es el string vacio
}

