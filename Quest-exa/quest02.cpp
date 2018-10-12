#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
  vector <double>numeros;
  double uno;
  double dos;
  double diferencia;
	string para;
  int a=1;
	while (uno!=0){
		cin >> uno;
  	numeros.push_back(uno);
    for (int i = 0;i<numeros.size();i++){
    if (numeros[i]<numeros[i-1]){
      cout << "Es el menor hasta ahora\n";
    }
    else if (numeros[i]>numeros[i-1]){
      cout << "Es el mayor hasta ahora\n";
    }
    }
	}
  if (uno<dos){
    cout << "El menos valor es:"<<uno<<"\n";
    cout << "El mayor valor es:"<< dos << "\n";
  }
  else{
    cout << "El menos valor es:"<<dos<<"\n";
    cout << "El mayor valor es:"<<uno<< "\n";
  }
  diferencia=uno-dos;
  if (diferencia<=0.001){
    cout << "Los numeros son casi iguales";
  }
  
}