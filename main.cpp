#include "Animal.hpp"

using namespace std;

int main() {

	Animal *a1 = new Animal("Lion",4);
	Animal *a2 = new Animal("Léopard", 7);
	cout << *a1 << endl;

	a1 = a2;
	cout << *a1 << endl;
	cout << *a2 << endl;

	return 0;
}