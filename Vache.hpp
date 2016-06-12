#ifndef VACHEHPP
#define VACHEHPP

#include <iostream>
#include "Animal.hpp"
using namespace std;

#include <cstring>

class Vache : public Animal {

	int nbPetits;

public:
	Vache(string nom, int ref, int nbPetits);
	Vache(const Vache &);
	~Vache();
	Vache & operator=(const Animal &);

	int getNbPetits() const;
	void setNbPetits(int na);

	virtual void affiche(ostream &out) const;
	void cri() const;
};

#endif