#include <iostream>
#include <ctime>

int main()
{
    std::srand(time(nullptr));
    std::cout << "Devine le nombre: ";
    int nombre = std::rand() % 100;
    int reponse = 0;
    int essaie = 0;
    while (essaie < 5) {
        std::cin >> reponse;
        while (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Vous devez mettre un nombre" << std::endl;
            std::cin >> reponse;
        }
            if (reponse == nombre) {
                std::cout << "Tu as gagne";
                break;
            }

            else {
                if (reponse <= nombre) {
                    std::cout << "Trop petit" << std::endl;
                }
                else {
                    std::cout << "Trop grand" << std::endl;
                }
                essaie++;
                
                std::cout << "Ce n'ai pas le bon resultat !" << std::endl;
                std::cout << "Il te reste maintenant " << 5 - essaie << " essaies" << std::endl;
            }
        }

    }
