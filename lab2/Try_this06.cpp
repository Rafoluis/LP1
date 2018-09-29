#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
  string a = "a";
	string c = "carajo";
  string m = "mierda";
	string s = "Piiii";
	vector <string>palabras;
	string palabra;
	while (palabra != a){
		cin>>palabra;
		palabras.push_back(palabra);
	}
	for (int i=0;i<palabras.size();i++){
		if (palabras[i]==c||palabras[i]==m){
				palabras[i]=s;
			}
		}
  for (int i = 0;i<palabras.size();i++){
    cout<<palabras[i]<< "_";
  }
}
