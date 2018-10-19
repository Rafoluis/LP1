#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int max=100;
	int n;
	int count;
	int num=1;
	cout << "ingrese numero\n";
	cin >>n;
	for (int i=1;i<n;i++){
		count=0;
		for(int a=1;a<max;a++){
			if (i%a==0){
			count++;
			}
			if(count>2){
				break;
			}
		}
		if (count<=2){
			cout << i << "\n";
		}
	}
	return (0);
}

/*criba de eratostenes/*