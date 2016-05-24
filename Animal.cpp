#include "Animal.hpp"

Animal::Animal(string nom, int ref) {
	this->nom = new string(nom);
	this->ref = new int(ref);
}

Animal::Animal(const Animal &a) {
	this->nom = a.nom;
	this->ref = a.ref;
}

Animal::~Animal() {
	cout << "Destructeur de Animal" << endl;
}

string Animal::getNom() const {
	return *nom;
}

int Animal::getRef() const {
	return *ref;
}

void Animal::affiche(ostream &out) const {
	out << "L'animal se nomme " << *nom << " et sa référence est " << *ref;
}

Animal & Animal::operator = (const Animal &a) {
	if (this != &a) {
		int *refint = new int(a.getRef());
		string *nomint = new string(a.getNom());
		delete ref;
		delete nom;
		ref = refint;
		nom = nomint;
	}
	return *this;
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