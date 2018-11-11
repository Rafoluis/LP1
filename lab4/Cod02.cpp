#include <iostream>
using namespace std;

namespace innocent{
	void f(int z){
		int x;
		x=7;
	}
}
namespace dangerous{
	void f(int z){
		int x;
		if (z>x){
		}
		x=7;
	}
}

int f(int);

int main(){
	int i=7;
	cout<<f(i)<<'\n';
}
double my_sqrt(double);
extern int a;

int a;
int x=7;
extern int x;
extern int x;

double my_sqrt(double);
duble my_sqrt(double d) { return 0.0;

	double my_sqrt(double);
	double my_sqrt(double);
	double expression();
	double primary(){ return expression();}
	double term(){ return primary();}
	double expression(){ return term();}
	int f(int n){ return n;}
