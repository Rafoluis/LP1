#include <iostream>
using namespace std;

int main()
{
	Date today;
	today.y=2005;
	today.m=24;
	today.d=12;
	Date x;
	x.y=-3;
	x.m=13;
	x.d=32;
	Date y;
	y.y=200;
	y.m=2;
	y.d=29;
	init_day(y, 2000, 1, 1);
	add_day(y, 28);
	return 0;
}

