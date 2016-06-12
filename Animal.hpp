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
	Animal();
	Animal(string);
	Animal(string nom, int ref);
	Animal(const Animal &a);
	~Animal();
	Animal & operator=(const Animal &);

	string getNom() const;
	int getRef() const;
	virtual void affiche(ostream &out) const;
	void cri() const;

	static void inverseBavard();
};

ostream& operator << (ostream &out, const Animal &a);

#endif

