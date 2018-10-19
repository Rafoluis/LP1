#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
  unsigned long long a = 1;
  int x = 1;
  while (x <= 64){
    cout << x << " " << a << "\n" ;
    a=a*2;
    x++;
  }
}