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

int main()
{
	int a = NULL;
	int b = NULL;
	int age = 13;
	char name[] = "";
	int end_count = 0;
	int table = 0;
	int firstif = 0;

	//===================================================================

	std::cout << "Quelle est ton nom : " << std::endl;
	std::cin >> name;
	std::cin.ignore();

	std::cout << "Quelle age a tu : " << std::endl;
	std::cin >> age;
	std::cin.ignore();

	std::cout << "Tu t'appelle: " << name << " et" << std::endl;
	std::cout << "Tu as: " << age << " ans" << std::endl;
	std::cin.ignore();

	//===================================================================

	std::cout << "Variable A et B: ";
    std::cin >> a >> b;
	std::cin.ignore();

	if (a == NULL || b == NULL)
	{
		std::cout << "Il s'agirais d'ecrire.." << std::endl;


		std::cout << "Le resultat est: rien?" << std::endl;
		std::cin.ignore();
	}
	else
	{
		std::cout << "Le resultat est: " << a + b << std::endl;
		std::cin.ignore();
	}

	//===================================================================

	std::cout << "Si le nombre est 0 ou moins alors le retour seras 1 sinon 0 : " << std::endl;
	std::cin >> firstif;

	if (firstif <= 0)
	{
		std::cout << "1" << std::endl;
		std::cin.ignore();
	}
	else
	{
		std::cout << "0" << std::endl;
		std::cin.ignore();
	}
	
	std::cout << "\n" << std::endl;
	std::cout << "Compte de 0 a 10 avec la boucle for" << std::endl;
	std::cout << "Jusqu'a combien le programme va compter?:" << std::endl;
	std::cin >> end_count;
	std::cin.ignore();

	for (int i = 0; i <= end_count; ++i)
	{
		std::cout << i << std::endl;
    }
	std::cin.ignore();
	std::cout << "Le programme a compte jusqu'a " << end_count << " !" << std::endl;
	std::cin.ignore();

	std::cout << "Merci de mettre la table de multiplication que vous voulez.. " << std::endl;
	std::cin >> table;
	std::cin.ignore();
	std::cout << "Voici la table de " << table << std::endl;
	for (int ib = 0; ib <= 10; ++ib)
	{
		std::cout << ib * table << std::endl;
	}
	std::cin.ignore();

	//===================================================================



	exit(0);
}