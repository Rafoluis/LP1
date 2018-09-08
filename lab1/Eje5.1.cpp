#include <iostream>
#include <string>
using namespace std;
string abc[3];
string numero;
int main (){
  cout <<"Ingrese los nombres\n";
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