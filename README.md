# DM-C-

### Thomas CITHAREL

## Question 1
b/ On utilise le mot-clé const dans le profil car on ne modifie pas les données dans les getters et les méthodes cri et affiche.
c/ Un attribut statique est propre à la classe et non à l'instance de celle-ci.
d/ L'attribut bavard doit être initialisé
e/ Deux choix sont possibles : l'utilisation d'un pointeur ou bien la création d'une variable en utilisant le constucteur Animal.
 		* 	Animal *a = new Animal("Perroquet",123);
		* 	Animal a("Perroquet",123);	
f/ Non, on ne peut pas créer un animal sans nom ou référence. On doit soit créer un constructeur d'Animal sans pararmètre ou mettre des arguments par défaut dans le constructeur existant
g/ Resultat obtenu : 
 	Je suis un Animal de type Truc et j'ai pour référence 42.  // par pointeur

 	Destructeur AnimalTruc
 	Je suis un Animal de type chose et j'ai pour référence 4. // voie classique

 	Destructeur Animalchose
 	affiche animal puique bavard est a true, on doit modifier affiche pour éviter sa présence.
 	Destructeur Animalchose
h/ Lors de cette mise à jour, le destructeur correspondant à l'objet est appelé seulement une fois.
i/ Oui, a2 est stocké dans a1 et le destructeur correspondant à a2 est utilisé deux fois.
	Mais si a1 et a2 était définis comme des pointeurs, il aurait fallu créer un opérateur de recopie.


## Question 2

b/ On n'a pas besoin de redéfinir getNom() et getRef() car cette classe hérite d'Animal où elles sont définies.
c/ On ne peut pas utiliser nom et ref car ces attributs sont privés, mais bavard est protected donc accessible.
e/ 

* `a1 = t1;` : Met les informations « animal » de la tortue dans Animal

* `t1 = a1;` : Ne fonctionne pas : t1 reste tel quel.

* `t1 = v1;` : Ne fonctionne pas

* `v1 = t1;` : Ne fonctionne pas

g/ Oui mais seul le constructeur de vache est affiché.


## Question 3

a/ La méthode statique de la classe Animal.
b/ Seuls les cris, et les destructeurs sont affichés.
c/ Le code compile
d/ Tous sauf la partie Animal à cause de la méthode static inverseBavard utilisé plus en aval. (rend l'attribut bavard à faux)
e/ Non car les données correspondant à la tortue sont toujours là. Le chemin du pointeur pointé à été détruit.
f/ Cela rend la classe non instenciable, Animal est ainsi une classe abstraite.
