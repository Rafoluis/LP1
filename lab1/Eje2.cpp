#include <iostream>
#include <string>
using namespace std;
int main (){
  int a = 2000;
  char c = a;
  int b = c;
  if (a == b){
    cout << "Wow tenemos caracteres gigantes \n";
  }
  else{
    cout << a << " es diferente de " << b;
  }
}

/*2000 es diferente de -48 */

