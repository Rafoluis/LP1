#include <iostream>
#include <string>
using namespace std;
string num;
int uno;
int dos;
int res;
float resf;


	int final(){
		cout <<"No es una operación que conozca\n";
	return 0;
	}

	int divi(){
		if (num=="/"){
		cout << "Ingrese los digitos\n";
		cin >> uno;
		cin >> dos;
		resf=uno/dos;
		cout << resf;
		}
		else{
			final();
		}
	return 0;	
	}
	int multi(){
		if (num=="*"){
		cout << "Ingrese los digitos\n";
		cin >> uno;
		cin >> dos;
		res=uno*dos;
		cout << res;
		}
		else{
			divi();
		}
	return 0;
	}
	int resta(){
		if (num=="-"){
		cout << "Ingrese los digitos\n";
		cin >> uno;
		cin >> dos;
		res=uno*dos;
		cout << res;
		}
		else{
			multi();
		}
	return 0;	
	}
	int suma (){
		if (num=="+"){
		cout << "Ingrese los digitos\n";
		cin >> uno;
		cin >> dos; 
		res=uno*dos;
		cout << res;
		}
		else{
			resta();
		}
	return 0;
	}
int inicio(){
	suma();
}
int main (){
	cout << "Escriba su operación: + - * / \n";
	cin >> num;
	inicio();
}

