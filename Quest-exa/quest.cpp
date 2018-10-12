#include <iostream>
#include<string>
using namespace std;

int main (){
	string uno;
	string para = "#";
	vector <string>numeros;
	while (uno != para){
		cin>>uno;
		numeros.push_back(uno);
	}
	for (int i = 0;i<numeros.size();i++){
		if (numeros[i]>numeros[i+1]){
			cout << "El menor valor es:"<<numeros[i];
			cout << "El mayor valor es:"<<numeros[i+1];
		}
	for (int i = 0;i<numeros.size();i++){
    cout<<numeros[i]<< " ";
  }
}