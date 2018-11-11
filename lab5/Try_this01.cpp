#include <iostream>
#include <vector>
using namespace std;

int main(){
	int cont;
	int a;
	int n;
	vector<int>num;
	while(cin >>a&&a!=0){
		num.push_back(a);
	}
	for (int i=0; i<num.size()-1; i++){
		for(int j=i+1; j<num.size(); j++){
			if(num[i]>num[j]){
				cont = num[i];
				num[i] = num[j];
				num[j]= cont;
			}
		}
	}
	for (int i=0;i<num.size();i++){
		cout<<num[i];
	}
}