#include <iostream>
using namespace std;

class Link {
public:
	string value;
  void print();
	Link(const string& v, Link* p = 0, Link* s = 0)
		: value(v), prev(p), succ(s){}
	Link* insert(Link*n);
	Link* erase();

	Link* find(const string& s);
	const Link* find(const string& s)const;
	Link* next() const {return succ;}
	Link* previous() const {return prev;}
private:
	Link* prev;
	Link* succ;
};

Link* Link :: insert(Link* n)
{
	Link* p = this;
	if(n==0) return p;
	if(p==0) return n;
	n->succ=p;
	if(p->prev) p->prev->succ=n;
	n->prev = p->prev;
	p->prev = n;
	return n;
}

void Link :: print(){
	Link* p = this;
	while (p){
		cout<<p->value<<endl;
		p=p->succ;
	}
}

int main()
{
	Link* nord_gods = new Link("Thor");
	nord_gods=nord_gods->insert(new Link("Odin"));
	nord_gods=nord_gods->insert(new Link("Freia"));
	nord_gods->print();
	return 0;
}
