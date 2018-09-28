#include<iostream>
#include<string>
using namespace std;

int main () {
	const double yen = 112.57;
	const double euro = 0.85;
	const double libras = 0.76;
	char valor = ' ';
	char valor2 = ' ';
	double cant = 1;
	double cant2 =1;
	cout << "Por favor ingrese la conversion (y, e, l, d):\n";
	cin >> valor;
	if (valor=='y'){
		cout << "Ingrese valor \n";
		cin >> cant;
		cout << cant << " dolares es igual a " << yen*cant<<" yenes\n";
	}
	else if (valor=='e'){
		cout << "Ingrese valor";
		cin >> cant;
		cout << euro*cant<< "euros\n";
	}
	else if (valor=='l'){
		cout << "Ingrese valor";
		cin >> cant;
		cout << cant << " dolares es igual a "<< libras*cant<< " libras esternilas\n";
	}
	else if (valor=='d'){
		cout << "Ingrese el valor";
		cin >> cant2;
		cout << "Ingrese (y, e, l)";
		cin >> valor2;
		if (valor2=='y'){
			cout << cant2 << " yenes es igual a "<<  cant2/0.0089<<" dolares\n";
		}
		else if (valor2=='e'){
			cout << cant2 << " euros es igual a " << cant2/1.18<< "dolares\n";
		}
		else if (valor2=='l'){
			cout << cant2 << " libras esternilas es igual a " << cant2/1.31<< " dolares\n";
		}
		else {
			cout << "No conozco esa moneda\n";
		}
	}
	else{
		cout << "No conozco esa moneda\n";
	}
}