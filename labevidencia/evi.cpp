#include <iostream>
#include <cstdio>
using namespace std;
  int x;
  int y;
  float r;
int main() {
  cin >> x;
  cin >> y;
  if (x==1)
  {
    r=4.00*y;
  }
  else if(x==2)
  {
   r=4.50*y;
  }
  else if(x==3)
  {
    r=5.00*y;
  }
  else if(x==4)
  {
    r=2.00*y;
  }
  else if(x==5)
  {
    r=1.50*y;
  }
  printf("Total: R$ %.2f\n",r);
  return 0;
}