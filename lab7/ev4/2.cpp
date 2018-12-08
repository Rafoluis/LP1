#include<iostream>
using namespace std;

void to_lower(char* s){
    int c=0,d='a',f='A';
	int j=d-f;
    while(s[c]!='\0'){
        int hj=s[c];
        s[c]=hj-j;
        c++;
    }
}
