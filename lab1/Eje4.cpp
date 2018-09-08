#include <iostream>
#include <string>
using namespace std;
int a;
int b;
int main (){
  cout << "Dame dos enteros \n";
  cin >> a;
  cin >> b;
  cout << "Division:" << a/b << "\n";

  cout << "Multiplicación:" << a*b << "\n";
  cout << "Suma:" << a+b << "\n";
  cout << "Resta:" << a-b << "\n";
  if (a>b){
    cout << a << "es mayor que " << b << "\n";
  }
  else {
    cout << b << "_es mayor que " << a << "\n";
  }
  

}
