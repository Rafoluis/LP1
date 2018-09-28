#include<iostream>
#include<string>
using namespace std;
int b=97;

int abc(char a){
  a=b;
  cout << a;
  return a;
}

int main (){
  while (b<=122){
    cout<< abc(b) << '\n';
    ++b;
  }

}
