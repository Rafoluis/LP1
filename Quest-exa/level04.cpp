#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
	vector <double>distan;
	double valor;
	while(cin >>valor&&valor!=0){
		distan.push_back(valor);
	}
	double sum = 0;
	double mayor =0;
	double menor = 0;
	double suma;
	int div;
	int ciu1;
	int ciu2;

	for (int i = 0; i< distan.size(); i++){
		if (distan[i]>distan[i+1]){
			mayor=distan[i];
		}
		else{
			menor=distan[i];
		}
	}
	cout << "El mayor es: " << mayor << "\n";
	cout << "El menor es: " << menor << "\n";
	cout << "Ingresar numero de ciudades para la media\n";
	cin >> ciu1;
	cin >> ciu2;
	for (int i=ciu1;i<ciu2;i++){
		suma+=distan[i];
		div++;
	}
	sort(distan.begin(), distan.end());
	cout << "Media distancia:" << suma/div<< "\n";

}