#ifndef ANIMALHPP
#define ANIMALHPP
#include <iostream>

using namespace std;

#include <cstring>

class Animal {
	string nom;
	int ref;
protected:
	static bool bavard;

public:
	Animal(string nom, int ref);
	~Animal();

	string getNom() const;
	int getRef() const;
	void affiche(ostream &out) const;
	void cri() const;

	static void inverseBavard();
};

ostream& operator << (ostream &out, Animal a);

#endif