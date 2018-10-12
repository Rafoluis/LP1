#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
	int n=50;
	int y=0;
	string condi;
	string condi1;
	cout << "Piensa en un valor entre 1 y 100\n";
	cout << "¿Es menor o igual a " << n << "?\n";
	cin >>condi;
	n=n/2;
	if (condi=="si"){
		while (n<=50&&n>=0){
			cout << "¿Su numero es menor o igual que " << n << "?\n";
			cin >>condi1;
			if (condi1=="si"){
				n=n/2;
			}
			else{
				n=y-n;
				y=y-n;
				n=n/2;
				n=y+n;
				y=n;
			}
		}
	}
	else {
	y=100;
	n=n+50;
		while (n<=100&&n>50){
			cout << "¿Su numero es menor o igual que " << n << "?\n";
			cin >>condi1;
			if (condi1=="si"){
				n=y-n;
				y=y-n;
				n=n/2;
				n=y+n;
				y=100;
			}
			else{
				n=y-n;
				y=y-n;
				n=n/2;
				n=y+n;
				y=n;
			}

		}
	}
}
	