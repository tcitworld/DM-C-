#include "Animal.hpp"

bool Animal::bavard = false;

Animal::Animal() {}

Animal::Animal(string nom):nom(nom), ref(0) {}

Animal::Animal(string nom, int ref): nom(nom), ref(ref) {}

Animal::Animal(const Animal &a): nom(a.getNom()), ref(a.getRef()) {}

Animal::~Animal() {
	if (bavard) {
		cout << "Destructeur de Animal " << nom << endl;
	}
}

string Animal::getNom() const {
	return this->nom;
}

int Animal::getRef() const {
	return this->ref;
}

void Animal::affiche(ostream &out) const {
	if (bavard){
		out << "L'animal se nomme " << this->nom << " et sa référence est " << this->ref;
	}
}

void Animal::cri() const {
	cout << "Cri inconnu" << endl;
}

void Animal::inverseBavard() {
	Animal::bavard = !Animal::bavard;
}

ostream& operator<< (ostream &out, const Animal &a) {
	a.affiche(out);
	return out;
}

Animal & Animal::operator=(const Animal & a) {
    if(&a != this) {
		this->nom = a.nom;
		this->ref = a.ref;
	}
    return *this;
}