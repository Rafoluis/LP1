#include <iostream>
#include <string>
using namespace std;
string num;


	int final(){
		cout <<"No es un numero que conozco\n";
	return 0;
	}

	int cuatro(){
		if (num=="cuatro"){
		cout << "4\n";
		}
		else{
			final();
		}
	return 0;	
	}
	int tres (){
		if (num=="tres"){
		cout << "3\n";
		}
		else{
			cuatro();
		}
	return 0;
	}
	int dos(){
		if (num=="dos"){
		cout << "2\n";
		}
		else{
			tres();
		}
	return 0;	
	}
	int uno (){
		if (num=="uno"){
		cout << "1\n";
		}
		else{
			dos();
		}
	return 0;
	}
	int cero (){
		if (num=="cero"){
		cout << "0\n";
		}
		else{
			uno();
		}
	}
int inicio(){
	uno();
}
int main (){
	cout << "Escriba su numero entre cero y cuatro \n";
	cin >> num;
	inicio();
}







