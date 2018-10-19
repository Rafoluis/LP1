#include <iostream>
using namespace std;

int main (){
	int n, i, j;
	cin >> n;
	bool primo[n];
	for (i=0;i<n;i++){
		primo[i]=true;
	}
	for (i=2;i<n;i++){
		for(j=2;i*j<n;j++){
			primo[i*j]=false;
		}
	}
	for (i=0;i<n;i++){
		if(primo[i]){
			cout << i << "\n";
		}
	}
}