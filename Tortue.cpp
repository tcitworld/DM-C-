#include "Tortue.hpp"

Tortue::Tortue(string nom, int ref, string milieu, int age): Animal(nom, ref), milieu(milieu), age(age) {}

Tortue::Tortue(const Tortue &t): Animal(t.getNom(), t.getRef()), milieu(t.getMilieu()), age(t.getAge()) {}

Tortue::~Tortue() {
	cout << "Destructeur tortue" << endl;
}


string Tortue::getMilieu() const {
	return this->milieu;
}

int Tortue::getAge() const {
	return this->age;
}

void Tortue::setAge(int na) {
	age = na;
}

void Tortue::affiche(ostream &out) const {
	if (bavard) {
		Animal::affiche(out);
		out << endl;
		out << "La tortue vit dans le milieu " << milieu << " et a " << age << " ans";
	}
}

void Tortue::cri() const {
	cout << "La tortue stridule" << endl;
}

Tortue & Tortue::operator=(const Animal & a) {
    if(&a != this) {
		Animal(a);
	}
    return *this;
}