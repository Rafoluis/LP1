#include<iostream>
#include<string>
using namespace std;

int main (){
	int a = 7;
	int b = 4;
	if (a<=b){

	}
	else {
		int t = a;
		a = b;
		b = t;
		cout << a << "\n";
		cout << b;
	}
}