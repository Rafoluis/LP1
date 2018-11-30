#include <iostream>
using namespace std;

double* clac(int res_size, int max)
{
	double* p = new double[max];
	double* res = new double[res_size];

	delete[] p;

	return res;
}
int main()
{
	double* r = clac(100,1000);

	delete[]r;
}