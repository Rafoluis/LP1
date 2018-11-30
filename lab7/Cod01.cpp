#include <iostream>
using namespace std;

int main()
{
	cout<<"el_tam_de_char_es"<< sizeof(char)<<" "
	<< sizeof ('a')<<'\n';
	cout<<"el_tam_de_int_es"<< sizeof(int)<<" "
	<< sizeof (2+2)<<'\n';
	int* p = 0;
	cout<<"el_tam_de_int*_es"<< sizeof(int*)<<" "
	<< sizeof (p)<<'\n';

	vector<int>v(1000);
	cout<<"el_tam_de_vector<int>(1000)_is_"
		<<sizeof(vector<int>)<<' '<<sizeof(v)<<'\n';
}