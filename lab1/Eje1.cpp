#include <iostream>
#include <string>
using namespace std;
int num;
int resul;
bool compa;
int main (){
  cout << "Ingresar el numero \n";
  cin >> num;
  if (num % 2 == 0){
    cout << "El valor de " << num << " es un número par";
  }
  else{
    cout << "Su numero es impar";
  }
}