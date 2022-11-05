#include "func.hpp"
#include <iostream>

int add(int a, int b) {

	return a + b;
}

void verifyg()
{

	int propg;
	int numberg = 138;

	std::cin >> propg;

	do {

		if (propg > numberg)
		{
			std::cout << "Plus petit.. \n";
			verifyg();
		}
		else if (numberg > propg) {

			std::cout << "Plus grand.. \n";
			verifyg();
		}
		else {
			break;
		}

	} while (propg == numberg);
}