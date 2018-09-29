#include <iostream>
using namespace std;

int square(int);
double sqrt(double);

int main(){
	int x = square(44);
	for (int i=0;i<=44;i++){
		int x = square(44);
	}
}

int square(int x){
	return x+x;
}