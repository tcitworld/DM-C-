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

	string getNom() const;
	int getRef() const;
	virtual void affiche(ostream &out) const;
	void cri() const;

	static void inverseBavard();
};

ostream& operator << (ostream &out, const Animal &a);

#endif

// b/ On utilise le mot-clé const dans le profil car on ne modifie pas les données dans les getters et les méthodes cri et affiche.
// c/ Un attribut statique est propre à la classe et non à l'instance de celle-ci.
// d/ L'attribut bavard doit être initialisé
// e/ Deux choix sont possibles : l'utilisation d'un pointeur ou bien la création d'une variable en utilisant le constucteur Animal.
// 		* 	Animal *a = new Animal("Perroquet",123);
//		* 	Animal a("Perroquet",123);	
// f/ Non, on ne peut pas créer un animal sans nom ou référence. On doit soit créer un constructeur d'Animal sans pararmètre ou mettre des arguments par défaut dans le constructeur existant
// g/ Resultat obtenu : 
// 	Je suis un Animal de type Truc et j'ai pour référence 42.  // par pointeur

// 	Destructeur AnimalTruc
// 	Je suis un Animal de type chose et j'ai pour référence 4. // voie classique

// 	Destructeur Animalchose
// 	affiche animal puique bavard est a true, on doit modifier affiche pour éviter sa présence.
// 	Destructeur Animalchose
// h/ Lors de cette mise à jour, le destructeur correspondant à l'objet est appelé seulement une fois.
// i/ Oui, a2 est stocké dans a1 et le destructeur correspondant à a2 est utilisé deux fois.
// 	Mais si a1 et a2 était définis comme des pointeurs, il aurait fallu créer un opérateur de recopie.

