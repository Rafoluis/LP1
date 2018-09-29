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
	vector <string>malas;
	vector <string>palabras;
	string palabra;
	malas.push_back(c);
	malas.push_back(m);
	while (palabra != a){
		cin>>palabra;
		palabras.push_back(palabra);
	}
	for (int i=0;i<palabras.size();i++){
		for(int x=0; x<malas.size();x++){
			if (palabras[i]==malas[x]){
				palabras[i]=s;			
			}
		}
  }
  for (int i = 0;i<palabras.size();i++){
    cout<<palabras[i]<< " ";
  }
}
