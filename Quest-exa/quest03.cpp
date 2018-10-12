#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;


int main (){
	const double in = 0.0254;
	const double cm = 0.01;
	const double ft = 0.3048;
	const double m = 1;
	vector <double>cantidad;
	vector <char>valores;
	char valor;
	double cant;
	cout << "Ingrese valores luego (i,c,f,m)\n";		
	while (valor != 'm'){
	cin >> cant;
		cantidad.push_back(cant);
	cin >> valor;
		valores.push_back(valor);
	}
	for(int i=0;i<cantidad.size();i++){
		if (i==0){
			cantidad[i]=cantidad[i]*in;
		}
		else if (i==1){
			cantidad[i]=cantidad[i]*cm;
		}
		else if (i==2){
			cantidad[i]=cantidad[i]*ft;
		}
	}
	sort(cantidad.begin(),cantidad.end());
	for (int i = 0;i<cantidad.size();i++){
		cout<<cantidad[i]<< " ";
	}
	cout << "\n";
	for (int i = 0;i<valores.size();i++){
		cout<<valores[i]<< " ";
	}
	cout << "La suma de valores es: \n";
	for (int i = 0;i<cantidad.size();i++){
		double a = cantidad [i]+cantidad[i+1];
		cout << a;
	}

}