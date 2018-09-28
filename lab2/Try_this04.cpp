#include<iostream>
#include<string>
using namespace std;
int b=97;
int B=65;

int ABC(char A){
  A=B;
  cout << A;
  return A;
}

int abc(char a){
	a=b;
	cout << a;
	return a;
}

int main (){
	for (b=97;b<=122;b++){
		cout<< abc(b) << '\n';
	}
  for(B=65;B<=90;B++){
    cout<< ABC(B) << '\n';
  }
  for(int x=0;x<=9;x++){
    cout<<x << '\n';
  }

}