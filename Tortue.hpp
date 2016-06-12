#ifndef TORTUEHPP
#define TORTUEHPP

#include <iostream>
#include "Animal.hpp"
using namespace std;

#include <cstring>

class Tortue : public Animal {

	string milieu;
	int age;

public:
	Tortue(string nom, int ref, string milieu, int age);
	Tortue(const Tortue &t);
	~Tortue();
	Tortue & operator=(const Animal &);

	string getMilieu() const;
	int getAge() const;
	void setAge(int na);

	virtual void affiche(ostream &out) const;
	void cri() const;
};

#endif

