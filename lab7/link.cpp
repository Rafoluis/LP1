#include <iostream>
using namespace std;


class Link{
public:
	string value;
	Link(const string& v, Link* p = 0, Link* s= 0)
		: value(v), prev(p), succ(s){}
	Link* insert(Link*n);
	Link* erase();
	Link* find(const string& s);
	const Link* find(const string& s)const;
	Link* next() const {return succ;}
	Link* previous() const {return prev;}

	Link* prev;
	Link* succ;
};


Link* Link :: insert(Link* n)
{
	if(n==0) return this;
	if(this==0) return n;
	n->succ=this;
	if(this->prev)this ->prev->succ=n;
	n->prev = this ->prev;
	this ->prev = n;
	return n;
}

int main()
{
	Link* nord_gods = new Link("Thor", 0,0);
	Link* head = nord_gods;	
	nord_gods = new Link("Odin", nord_gods,0);
	nord_gods->prev->succ = nord_gods;
	nord_gods = new Link("Freia", nord_gods,0);
	nord_gods->succ->prev = nord_gods;
}
