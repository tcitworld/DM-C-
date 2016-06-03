#ifndef TABLOHPP
#define TABLOHPP

#include <iostream>
using namespace std;

template<class T> class Tablo {
	T* tab;
	int nbElem;

public:
	Tablo(int);
	Tablo(Tablo, int);
	void resize(int);
	T getTab() const;
	void add(T);
};

template<class T>
Tablo<T>::Tablo(int a) {
	this->nbElem = a;
	this->tab = new T[nbElem];
}

template<class T>
Tablo<T>::Tablo(Tablo<T> t, int a) {
	this->nbElem = a;
	this->tab = t.getTab();
}

template<class T>
void Tablo<T>::resize(int a) {
	for (int i = 0; i < this->nbElem; ++i)
	{
		/* code */
	}
	this->nbElem = a;
}

template<class T>
T Tablo<T>::getTab() const {
	return this->tab;
}

template<class T>
void Tablo<T>::add(T elem) {
	this->tab[nbElem++] = elem;
	this->resize(nbElem);
}

#endif
