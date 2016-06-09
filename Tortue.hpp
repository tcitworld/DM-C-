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

	string getMilieu() const;
	int getAge() const;
	void setAge(int na);

	virtual void affiche(ostream &out) const;
	void cri() const;
};

#endif


// b/ On n'a pas besoin de redéfinir getNom() et getRef() car cette classe hérite d'Animal où elles sont définies.
// c/ On ne peut pas utiliser nom et ref car ces attributs sont privés, mais bavard est protected donc accessible.
// g/ Oui mais seul le constructeur de vache est affiché.
