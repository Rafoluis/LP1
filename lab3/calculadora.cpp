#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int operacion(int n1,int n2, char ope){
	switch(ope){
		case '/':
			cout << n1/n2 << "\n";
			break;
		case '*':
			cout << n1*n2 << "\n";
			break;
		case '+':
				cout <<  n1+n2 << "\n";
			break;
		case '-':
				cout <<  n1-n2 << "\n";
			break;
		default:
			cout << "no es una función validad\n";
			break;
	}
  return(0);
}

int conver(string valor){
  vector <string>diga;
  int c;
	diga.push_back("0");
	diga.push_back("1");
	diga.push_back("2");
	diga.push_back("3");
	diga.push_back("4");
	diga.push_back("5");
	diga.push_back("6");
	diga.push_back("7");
	diga.push_back("8");
	diga.push_back("9");
	diga.push_back("cero");
	diga.push_back("uno");
	diga.push_back("dos");
	diga.push_back("tres");
	diga.push_back("cuatro");
	diga.push_back("cinco");
	diga.push_back("seis");
	diga.push_back("siete");
	diga.push_back("ocho");
	diga.push_back("nueve");
	for (int i = 0;i<diga.size();i++){
		if (valor==diga[i]){
			c=i;
			if (c>=9){
				c=c-10;
			break;
			}
    }
}
return (c);	
}

int main (){
  string a;
	string b;
	char ope;
  int cont;
	while (cont==0){
		cout << "Ingrese valores\n";
 		cin >> a;
		cin >> b;
    cin >> ope;
    operacion(conver(a),conver(b),ope);
	}	
}
