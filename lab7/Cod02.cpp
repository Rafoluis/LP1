#include <iostream>
using namespace std;

int main()
{
	int var = 17;
	int* ptr = &var;

	char ch = 'c';
	char* pc = &ch;

	int ii = 17;
	int* pi = &ii;

	cout << "pc____"<< pc
		<<";_contenido_de_pc____"<<*pc<<'\n';
	cout << "pi___"<<pi
		<<";_contenido_de_pi____"<<*pi<<'\n';

	*pc ='x';
	*pi = 27;
	*pi = *pc;

	{
		char ch1 = 'a';
		char ch2 = 'b';
		char ch3 = 'c';
		char ch4 = 'd';
	}


}