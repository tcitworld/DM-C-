#ifndef TABLOHPP
#define TABLOHPP

#include <iostream>
using namespace std;

template<class T> class Tablo {
	T* tab;
	int nbElem;

public:
	Tablo(int);
	Tablo(const Tablo &);
	void resize(int);
	T* getTab() const;
	int getNbElem() const;
	void add(const T &);
};

template<class T>
Tablo<T>::Tablo(int a) {
	this->nbElem = a;
	this->tab = new T[nbElem];
}

template<class T>
Tablo<T>::Tablo(const Tablo<T> &t) {
	this->nbElem = t.getNbElem();
	for (int i = 0; i < t.getNbElem(); ++i)
	{
		this->add(t.getTab()[i]);
	}
}

template<class T>
void Tablo<T>::resize(int a) {
	T* resizeArr = new T[a];
	for (int i = 0; i < nbElem; ++i)
	{
		resizeArr[i] = tab[i];
	}
	tab = resizeArr;
	delete[] resizeArr;
}

template<class T>
T* Tablo<T>::getTab() const {
	return tab;
}

template<class T>
int Tablo<T>::getNbElem() const {
	return nbElem;
}

template<class T>
void Tablo<T>::add(const T &elem) {
	this->resize(nbElem);
	cout << elem << endl;
	this->tab[nbElem++] = elem;
}

#endif
