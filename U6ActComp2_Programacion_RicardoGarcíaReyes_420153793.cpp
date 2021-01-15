#include <iostream>
using namespace std;

void expl(){
  cout<<"La fórmula del triangulo de pascal es: "<<endl;
  cout<<"(n,k) = n! / (k!*(n-k)!) para cada numero del triangulo de pascal"<<endl;
  cout<<endl;
  return;
}
int recorridoFact(int n){
  if(n<2){
    return 1;
  }
  else{
  return n*(recorridoFact(n-1));//haz el factorial de lo que queda
  }
}

int comb (int n, int k){
  return(recorridoFact(n)/(recorridoFact(k)*recorridoFact(n-k)));
}


int main(){
  expl();
  int n;
  cout<<"Ingrese el numero maximo del triangulo"<<endl;
  cin>>n;
  for(int i =0; i<=n; i++){
    for(int j=0; j<=i;j++){
      cout<<comb(i,j)<<"   ";
    }
    cout<<endl;
  }
}