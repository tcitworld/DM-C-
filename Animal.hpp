#ifndef ANIMALHPP
#define ANIMALHPP
#include <iostream>

using namespace std;

#include <cstring>

class Animal {
	string* nom;
	int* ref;
protected:
	static bool bavard;

public:
	Animal(string, int);
	Animal(const Animal &);
	~Animal();

	string getNom() const;
	int getRef() const;
	void affiche(ostream &out) const;
	void cri() const;
	Animal & operator = (const Animal &);

	static void inverseBavard();
};

ostream& operator << (ostream &out, Animal a);

#endif