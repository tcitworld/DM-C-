#include "Animal.hpp"
#include "Tortue.hpp"
#include "Vache.hpp"
#include "Tablo.hpp"

using namespace std;

int main() {

	Animal a1("Lion",4);
	Animal a2("Léopard", 7);
	Vache v1("Anabelle", 432, 4);

	a1.inverseBavard();

	cout << "Lion" << endl;
	cout << a1 << endl;

	cout << "Lion devient Léopard" << endl;
	a1 = a2;
	cout << a1 << endl;

	cout << "Léopard devient vache" << endl;
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

	cout << "Tableau" << endl;

	Tablo<Animal> tb(5);
	tb.add(*a6);
	tb.add(a2);

	return 0;
}

// a/ La méthode statique de la classe Animal.
// b/ Seuls les cris, et les destructeurs sont affichés.
// c/ Le code compile
// d/ Tous sauf la partie Animal à cause de la méthode static inverseBavard utilisé plus en aval. (rend l'attribut bavard à faux)
// e/ Non car les données correspondant à la tortue sont toujours là. Le chemin du pointeur pointé à été détruit.
// f/ Cela rend la classe non instenciable, Animal est ainsi une classe abstraite.
