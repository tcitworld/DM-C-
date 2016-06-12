#ifndef TABLOHPP
#define TABLOHPP

#include <iostream>
using namespace std;

template<class T> class Tablo {
	T* tab;
	int nbElem;

public:
Tablo() {
	this->nbElem = 0;
	this->tab = new T[nbElem];
}

Tablo(const Tablo<T> &t) {
	this->nbElem = t.getNbElem();
	for (int i = 0; i < t.getNbElem(); ++i)
	{
		this->add(t.getTab()[i]);
	}
}

void resize(int a) {
	T* resizeArr = new T[a+1];
	for (int i = 0; i < nbElem; ++i)
	{
		resizeArr[i] = tab[i];
	}
	tab = resizeArr;
	delete[] resizeArr;
}

T* getTab() const {
	return tab;
}

int getNbElem() const {
	return nbElem;
}

T getElem(int a) {
	return tab[a];
}

void add(const T &elem) {
	this->resize(nbElem);
	this->tab[nbElem++] = elem;
}
};

#endif
