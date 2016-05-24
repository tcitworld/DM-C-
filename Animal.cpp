#include "Animal.hpp"

Animal::Animal(string nom, int ref): nom(nom), ref(ref) {}

Animal::~Animal() {
	cout << "Destructeur de Animal" << endl;
}

string Animal::getNom() const {
	return this->nom;
}

int Animal::getRef() const {
	return this->ref;
}

void Animal::affiche(ostream &out) const {
	out << "L'animal se nomme " << this->nom << " et sa référence est " << this->ref;
}

void Animal::cri() const {
	cout << "Cri inconnu" << endl;
}

bool Animal::bavard = true;

void Animal::inverseBavard() {
	Animal::bavard = !Animal::bavard;
}

ostream& operator<< (ostream &out, const Animal a) {
	a.affiche(out);
	return out;
}