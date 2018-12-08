#include <iostream>
using namespace std;

bool Find(string a){
	
	while(this->prev!=NULL){
		this=this->prev;
	}
	while(this->succ!=NULL){
		if(this->value==a){
			return true;
		}
		this=this->succ;
	}
	return false;
}

