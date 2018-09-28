#include<iostream>
#include<string>
using namespace std;

int main (){
	const double yen = 112.57;
	const double euro = 0.85;
	const double libras = 0.76;
	const double yuan = 6.86;
	const double shekels = 3.57;
	char valor = ' ';
	char valor2 = ' ';
	double cant = 1;
	double cant2 =1;
	cout << "Por favor ingrese la conversion (y, e, l, u, s, d):\n";
	cin >> valor;
	switch (valor){
		case 'y':
			cout << "Ingrese valor \n";
			cin >> cant;
			cout << cant << " dolares es igual a " << yen*cant<<" yenes\n";
			break ;
		case 'e':
			cout << "Ingrese valor";
			cin >> cant;
			cout << euro*cant<< "euros\n";
			break;
		case 'l':
			cout << "Ingrese valor";
			cin >> cant;
			cout << cant << " dolares es igual a "<< libras*cant<< " libras esternilas\n";
			break;
		case 'u':
			cout << "Ingrese valor";
			cin >> cant;
			cout << cant << " dolares es igual a "<< yuan*cant<< " yuanes\n";
			break;
		case 's':
			cout << "Ingrese valor";
			cin >> cant;
			cout << cant << " dolares es igual a "<< shekels*cant<< " shekels\n";
			break;			
		case 'd':
			cout << "Ingrese el valor";
			cin >> cant2;
			cout << "Ingrese (y, e, l, u, s)";
			cin >> valor2;
			switch (valor2){
				case 'y':
					cout << cant2 << " yenes es igual a "<<  cant2/0.0089<<" dolares\n";
					break ;
				case 'e':
					cout << cant2 << " euros es igual a " << cant2/1.18<< "dolares\n";
					break;
				case 'l':
					cout << cant2 << " libras esternilas es igual a " << cant2/1.31<< " dolares\n";
					break;
				case 'u':
					cout << cant2 << " yuanes a " << cant2/0.15<< " dolares\n";
					break;
				case 's':
					cout << cant2 << " shekels a " << cant2/0.28<< " dolares\n";
					break;
				default:
					cout << "No conozco esa moneda\n";
					break;
				}
		break;
    	default:
    		cout << "No conozco esa moneda3\n";
			break;

}
}