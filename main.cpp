#include "Animal.hpp"
#include "Tortue.hpp"
#include "Vache.hpp"
#include "Tablo.hpp"

using namespace std;

int main() {

	Animal::inverseBavard();

	Animal a1("Lion",4);
	Tortue t1("Tutute", 444, "EauDouce", 35);
	Animal a2("Léopard", 7);
	Vache v1("Anabelle", 432, 4);
	Animal *pa;

	cout << "Animal devient tortue" << endl;
	a1 = t1;

	cout << a1 << endl;

	cout << "Tortue devient Animal" << endl;
	t1 = a1;

	cout << t1 << endl;

	cout << "Tortue devient vache" << endl;
	t1 = v1;

	cout << t1 << endl;

	cout << "Vache devient tortue" << endl;
	v1 = t1;

	cout << v1 << endl;

	pa = new Animal("Hercule", 587);
	pa = new Tortue("Mobil", 596, "EauMer", 99);
	pa = new Vache(v1);

	cout << a1 << endl;

	a1 = a2;
	cout << a1 << endl;

	a2 = v1;
	cout << a2 << endl;

	Animal *a3 = new Tortue("Mobil", 596, "EauMer",99);

	cout << *a3 << endl;

	delete a3;

	Animal *a4 = new Vache("Marguerite", 555, 4);

	cout << *a4 << endl;

	Vache a5("Sélène", 423,4);
	Animal *a6;
	a6 = new Vache(a5);

	cout << a5 << endl;
	cout << *a6 << endl;

	Tortue a7("Toad", 56, "Mare", 21);


	cout << "Tableau" << endl;

	Tablo<Animal> tb;
	tb.add(*a6);

	cout << tb.getElem(0) << endl;

	cout << "End tablo" << endl;

	return 0;
}

