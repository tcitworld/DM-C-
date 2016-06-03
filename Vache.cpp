#include "Vache.hpp"

Vache::Vache(string nom, int ref, int nbPetits): Animal(nom, ref), nbPetits(nbPetits) {}

Vache::Vache(const Vache &v): Animal(v.getNom(), v.getRef()), nbPetits(v.getNbPetits()) {}

Vache::~Vache() {
	cout << "Destructeur vache" << endl;
}


int Vache::getNbPetits() const {
	return this->nbPetits;
}

void Vache::setNbPetits(int na) {
	nbPetits = na;
}

void Vache::affiche(ostream &out) const {
	Animal::affiche(out);
	out << endl;
	out << "La vache possède " << nbPetits << " petits";
}

void Vache::cri() const {
	cout << "La vache meugle" << endl;
}