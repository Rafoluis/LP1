#include <iostream>
using namespace std;

int square(int x,int y){
 if(x==0 or y==0)
   return 0;
  else
   {
    return x+square(x,y-1);
   }
}

int main(){
  int a;
  a=square(44,44);
  cout << a;
}
