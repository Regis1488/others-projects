#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
	int reponse;
	int i;
	int addition;
	int xy;
	int chiffre;
	float x;


	cout << "###############################################\n#             Made by Sorus                   #\n#                                             #\n#                                             #\n#\##############################################\n";
	cout << "Quelle operation veux tu effectuer" <<
		endl;
	cout << "[1] = Addition \n[2] = Racine carre" << endl;
	cin >> reponse;
	if (reponse != 1 && 2) {
		cout << "Vous n'avez pas choisi un chiffre correct" << endl;
		return 0x02;
	}


		if (reponse == 1) {
			cout << "Donne moi le premier chiffre a calculer" << endl;
			while (!std::cin.good())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Vous devez mettre un nombre" << std::endl;
			}
			cin >> x;
			cout << "Donne moi le deuxième chiffre a calculer" << endl;
			cin >> xy;
			addition = x + xy;
			cout << "Le resultat est " << addition << endl;
			std::this_thread::sleep_for(std::chrono::seconds(5));
		
		}

		if (reponse == 2) {
			cin.clear();
			cout << "Combien de chiffre veux tu calculer ?" << endl;
			cin >> chiffre;
			cout << "Donne moi le chiffre a calculer " << endl;
			while (!std::cin.good())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Vous devez mettre un nombre" << std::endl;
				std::cin >> chiffre;
			}
			for (i = 0; i < chiffre; i++) {
				while (!std::cin.good())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Vous devez mettre un nombre" << std::endl;
					std::cin >> chiffre;
				}

				cin >> x;
				xy = x;
				if (x == 0) {
					cout << "Il n'y a pas de racine carre" << endl;
					cout << "Donne moi le chiffres a calculer " << endl;
				}
				else {
					x = sqrt(x);
					cout << "Le resultat de la racine carre de " << xy << " est : " << x << endl;
					std::this_thread::sleep_for(std::chrono::seconds(5));
				}
			}
		}
	}
