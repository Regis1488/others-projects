#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
	int reponse;
	int i;
	int resultat;
	int xy;
	int chiffre = 1;
	float x;
	double reponseTri;

	cout << "###############################################\n#             Made by Sorus                   #\n#                                             #\n#                                             #\n#\##############################################\n";
	cout << "Quelle operation veux tu effectuer" << endl;

	cout << "[1] = Addition \n[2] = Soustraction\n[3] = Multiplication \n[4] = Division \n[5] = Racine carre\n[6] = Sinus " << endl;
	cin >> reponse;
	if (reponse > 6) {
		cout << "Vous n'avez pas choisi un chiffre correct" << endl;
		return 0x02;
	}


	if (reponse == 1) {
		cin.clear();
		cout << "Combien de chiffre veux tu calculer ? (Default = 1)" << endl;
		cin >> chiffre;
		for (i = 0; i < chiffre; i++) {
			cout << "Donne moi le premier chiffre a calculer" << endl;
			while (!std::cin.good())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Vous devez mettre un nombre" << std::endl;
			}
			cin >> x;
			cout << "Donne moi le deuxieme chiffre a calculer" << endl;
			cin >> xy;
			resultat = x + xy;
			cout << "Le resultat est " << resultat << endl;
		}
		this_thread::sleep_for(chrono::seconds(5));
		return 0x01;
	}
	if (reponse == 2) {
		cin.clear();
		cout << "Combien de chiffre veux tu calculer ? (Default = 1)" << endl;
		cin >> chiffre;
		for (i = 0; i < chiffre; i++) {
			cout << "Donne moi le chiffre a calculer" << endl;
			while (!std::cin.good())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Vous devez mettre un nombre" << std::endl;

			}

			cin >> x;
			cout << "Donne moi le deuxieme chiffre a calculer" << endl;
			cin >> xy;
			resultat = x - xy;
			cout << "Le resultat est " << resultat << endl;
		}

		this_thread::sleep_for(chrono::seconds(5));
		return 0x01;
	}
	if (reponse == 3) {
		cin.clear();
		cout << "Combien de chiffre veux tu calculer ? (Default = 1)" << endl;
		cin >> chiffre;
		for (i = 0; i < chiffre; i++) {
			cout << "Donne moi le chiffre a calculer" << endl;
			while (!std::cin.good())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Vous devez mettre un nombre" << std::endl;
			}

			cin >> x;
			cout << "Donne moi le deuxieme chiffre a calculer" << endl;
			cin >> xy;
			resultat = x * xy;
			cout << "Le resultat est " << resultat << endl;

		}
		this_thread::sleep_for(chrono::seconds(5));
		return 0x01;
	}
	if (reponse == 4) {
		cin.clear();
		cout << "Combien de chiffre veux tu calculer ? (Default = 1)" << endl;
		cin >> chiffre;
		for (i = 0; i < chiffre; i++) {
			cout << "Donne moi le chiffre a calculer" << endl;
			while (!std::cin.good())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Vous devez mettre un nombre" << endl;

			}
			cin >> x;
			cout << "Donne moi le deuxieme chiffre a calculer" << endl;
			cin >> xy;
			resultat = x / xy;
			cout << "Le resultat est " << resultat << endl;

		}
		this_thread::sleep_for(chrono::seconds(5));
		return 0x01;
	}
	if (reponse == 5) {
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

			}
		}
		this_thread::sleep_for(chrono::seconds(5));
	}
	if (reponse == 6)
	{
			cin.clear();
			cout << "Vous voulez calculer combien de chiffre ?" << endl;
			cin >> chiffre;
			while (!std::cin.good())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Vous devez mettre un nombre" << endl;
				std::cin >> chiffre;
			}
			cout << "Veuiller saisir le chiffre a calculer" << endl;
			for (i = 0; i < chiffre; i++) {
				while (!std::cin.good())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Vous devez mettre un nombre" << std::endl;
					std::cin >> chiffre;
				}


			
				cin >> reponse;
				reponseTri = sin(reponse);
				cout << reponseTri << endl;
		}
			this_thread::sleep_for(chrono::seconds(5));
	}
}
