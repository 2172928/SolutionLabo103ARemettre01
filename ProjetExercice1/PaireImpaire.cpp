//but le programme lit un entier et qui détermine et affiche s’il s’agit d’un entier pair ou d’un entier impair
//auteur Gabriel Gendron
//date 2021/09/02

#include <iostream>

void main() {
	setlocale(LC_ALL, "");
	//declaration des variable
	int nb;

	//demande a l'utilisateut un nombre
	
	std::cout << "veuillez entrer un nombre";
	std::cin >> nb;
	// si le nombre est divisible par deux il est pair si non il est impair
	//division par deux doit etre egale a 0
	if (nb% 2==0)
	{
		std::cout << nb << "est un nombre paire\n"; 
	}
	
	else
	{
		std::cout << nb << " est un nombre impair";
	}
}
//plan de tests :
//nb				ecran
//1					impair
//2					pair
//-5				impair
//-2				pair
//0					pair
//z                 erreur(mias affiche 0 est paire)
