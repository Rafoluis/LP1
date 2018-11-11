#include <iostream>
#include <vector>
#include <random>
using namespace std;

int randint (int min, int max){
	static default_random_engine ran;
	return uniform_int_distribution<>{min,max}(ran);
}
int randint(int max){ return randint (1, max);}

int main(){
	vector <int>aleat;
  vector <int>num;
  int toro=0;
  int vaca=0;
  int cont=0;
	for (int i=0; i<4;i++){
		aleat.push_back(randint(9));
	}
  cout<<"Adivina el numero de cuatro digitos \n";
  while(toro!=4){
	  int  adi;
	  while(cin >>adi&&adi!=0){
		  num.push_back(adi);
	  }
    for(int i=0;i<aleat.size();i++){
      if(aleat[i]==num[i]){
       toro++;
      }
    }

    for(int i=0;i<aleat.size();i++){
      for(int j=0;j<aleat.size();j++){
        if(aleat[i]==num[j]){
          vaca++;
        }
      }
    }

    for(int i=0;i<aleat.size();i++){
      cout << aleat[i];
    }
    cout << '\n';
    cout << "Toros: " << toro <<'\n';
    cout << "Vacas: " << vaca << '\n';
  }
  cout << "Ganó\n";
}