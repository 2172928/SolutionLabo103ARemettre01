//but Écrivez un programme qui prend comme entrée un nombre de cinq chiffres. Le programme vérifie qu'il y a bien
/*5 chiffres dans le nombre;
1
2
3
4
5
*/ 
//auteur Gabriel Gendron
//date 2021/09/02

#include <iostream>

void main() {
	setlocale(LC_ALL, "");

	int monNombre;


	std::cout << "veuiller entrer un nombre a 5 chiffre";
		std::cin >> monNombre;
		if (monNombre >=10000)
		{
			if (monNombre <=99999)
			{
				//ici le nombre est correcte
				std::cout << monNombre / 10000 %10<< std::endl;
				std::cout << monNombre / 1000 %10 << std::endl;
				std::cout << monNombre / 100 %10 << std::endl;
				std::cout << monNombre / 10 %10 << std::endl;
				std::cout << monNombre / 1 %10 << std::endl;
			else {
				std::cout << monNombre << "ne contient pas 5 chiffre \n"
			}
			}
			else {
				std::cout<< monNombre <<"ne contient pas 5 chiffre \n"



			}
				 
		} 
}
/* plan de tests
nb				ecran
56				erreur le nombre na pas 5 chiffre
123456			erreur le nombre na pas 5 chiffre
01234			erreur le nombre na pas 5 chiffre



*/


