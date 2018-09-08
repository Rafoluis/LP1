#include <iostream>
#include <string>
using namespace std;
int abc[3];
int numero;
int main (){
  cout <<"Ingrese los tres numeros\n";
  for (int i=0;i<3;i=i+1){
    cin >> abc [i];
  }
  for (int i=0;i<3;i++)
  for (int j=i;j<3;j++)
  if (abc[i]>abc[j]){
    numero=abc[i];
    abc[i]=abc[j];
    abc[j]=numero;
  }
  for(int i=0;i<3;i++){
    cout<<abc[i];
  }
}