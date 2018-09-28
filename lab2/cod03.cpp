#include <iostream>
#include <string>
using namespace std;

int main (){
	int length = 20;
	int width = 40;
	int area = length*width;

	length = 99;
	{
		int perimeter = (length+width)*2;
		cout <<perimeter<<"\n";
	}
	{
		int perimeter=length*2+width*2;
		cout <<perimeter<<"\n";
	}
	{
		int perimeter = length+width/2;
		cout <<perimeter<<"\n";
	}

}	