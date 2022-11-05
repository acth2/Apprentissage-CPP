//Début: 03/11/22  Heure: 01:28
//Fin: ???
//AcTh2

//###########################################

// type name;
// char[]   - character - 'r'
// int    - integer - 50, 42, 500, -400
// float  - floating points - 4.2f
// double - double precision - 5.0

// 	std::cin.ignore();             = Vide tout
// 	std::cin >> age;               = Equivalant a un read en bash
// 	std::cout << "." << std::endl; = Envoie un message dans la console

//###########################################

// conditions: ==, !=, >=, <=, < >, &&, ||
// \_ Ce qui va utilisé ces conditions sont plus générallement les << while, for, if, .... >>
// le if est un peu pres comme le java:

//
// if (a == NULL || b == 10)
// {
//		std::cout << "Hello World!" << std::endl;
// }

//###########################################

// Ce qui en est des for c'est aussi un peu pres comme le java (générallement une variable, une instruction, et la facon de faire cette instruction)
// A toutes s'attentes pour ajouté <1> a une variable ce n'est pas i++ mais ++i !
//
// for (int i = 0; i <= 10; ++i
// {
//		std::cout << i << std::endl;
// }
// std::cin.ignore();
//
//
// La boucle while est aussi un peu pres comme le java !
// Exemple:
//
// while(true)
// {
// 		std::cout << "Comme le java !" << std::endl;
// }
// 	std::cin.ignore();
//
//

#include <iostream>
#include "func.hpp"
#include "var.hpp"
//specifie que tu utilise std
using namespace std;



int main()
{

	//===================================================================

	cout << "Hello, World \n\n";

	cout<< "Quelle est ton nom : ";
	cin >> name;
	cin.ignore();

	cout << "Quelle age a tu : ";
	cin >> age;
	cin.ignore();

	cout << "Tu t'appelle " << name << " et" << " tu as " << age << " ans! \n";
	cin.ignore();

	//===================================================================

	cout << "Variable A et B: ";
    	cin >> a >> b;
	cin.ignore();
	cout << "Le resultat est: " << a + b << "\n";
	cin.ignore();

	//===================================================================

	cout << "Si le nombre est 0 ou moins alors le retour seras 1 sinon 0 :";
	cin >> firstif;

	if (firstif <= 0)
	{
		cout << "1 \n" << std::endl;
		cin.ignore();
	}
	else
	{
		cout << "0\n" << std::endl;
		cin.ignore();
	}
	
	cout << "\n" << std::endl;
	cout << "Compte de 0 a 10 avec la boucle for\n" << std::endl;
	cout << "Jusqu'a combien le programme va compter?:" << std::endl;
	cin >> end_count;
	cin.ignore();

	for (int i = 0; i <= end_count; ++i)
	{
		std::cout << i << std::endl;
        }
	cin.ignore();
	cout << "Le programme a compte jusqu'a " << end_count << " ! \n" << std::endl;
	cin.ignore();

	cout << "Merci de mettre la table de multiplication que vous voulez.. " << std::endl;
	cin >> table;
	cin.ignore();
	cout << "Voici la table de " << table << "\n" << std::endl;
	for (int ib = 0; ib <= 10; ++ib)
	{
		cout << ib * table << "\n";
	}
	cin.ignore();

	//===================================================================

	do
	{
		cout << "ecrivez n'importe quelle nombre autre que 0 pour quitte la boucle.. \n";
		cout << "Ecrire: ";
		cin >> testwhile;
		cout << "\n\n\n";
		cin.ignore();

	} while (testwhile == 0);

	//===================================================================
	
	cout << "MiniJeux '+' ou '-' ? \n";
	cout << "------------------------ \n";
	cout << "Les regles sont simples, il y'a un nombre et vous devrez le devine.\n";
	cout << "Le programme vous aideras en vous ecrivant dans la console 'Plus grand' ou 'Plus petit' \n";
	cout << "------------------------ \n\n";
	cout << "(0 - 500)' \n";
	cout << "Ecrivez: ";
	verifyg();

	cout << "Bravo le nombre est belle et bien 138 ! \n\n\n";

	//===================================================================

	cout << add(1, 2);
	
	cin.ignore();

	//====================================================================

	cout << "\n\n\nTableau de nombres ! (4)\n";
	cout << "Valeur 0: ";
	cin >> t10;
	tableau1[0] = t10;
	cout << "\nValeur 1: ";
	cin >> t11;
	tableau1[1] = t11;
	cout << "\nValeur 2: ";
	cin >> t12;
	tableau1[2] = t12;
	cout << "\nValeur 3: ";
	cin >> t13;
	tableau1[3] = t13;
	cout << "\n\n============RESULTAT\n";
	cout << "Valeur 0: " << t10 << "\n";
	cout << "Valeur 1: " << t11 << "\n";
	cout << "Valeur 2: " << t12 << "\n";
	cout << "Valeur 3: " << t13 << "\n";
	cout << "\n=====================\n";

	//==================================================================== POINTEURS

	cout << "Address de AA: " << p_inta << "\n";
	cout << "Address de BB: " << p_intb << "\n\n\n\n";

	//Je ne suis pas allé plus loins sur ce qui concerne les pointeurs car je ne pense pas en a avoir besoin,
	//meme si j'ai regardé la documentation entiere dessus !

	//====================================================================

	exit(0);
}
