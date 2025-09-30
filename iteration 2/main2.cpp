
/**
* @file main2.cpp
* @brief Programme de gestion de logs - Itération 2
* @details Affiche un menu répétitif avec switch/case
* @author Oladhammou et Talbi
* @date [16/09/2025]
* @version 2.0
*/
#include <iostream>
#include <string>

using namespace std;

/**
* @brief Fonction principale du programme
* @details Affiche un menu en boucle jusqu'à ce que
* l'utilisateur choisisse de quitter (choix = 0)
* @return 0 si le programme se termine normalement
*/
int main()
{
    int choix = -1;
    do
    {
        cout << "================================" << endl;
        cout << "CIEL - Gestion de logs" << endl;
        cout << "================================" << endl;
         // Affichage du menu principal
        cout << "Menu principal :" << endl;
        // Lecture du choix utilisateur
        cout << "1 - Voir les evenements systeme" << endl;
        cout << "2 - Voir les connexions reseau" << endl;
        cout << "3 - Voir les actions utilisateur" << endl;
        cout << "0 - Quitter" << endl;

        cout << "votre choix: ";
        cin >> choix;
        // Traitement selon le choix
        switch (choix)
        {
        case 1:
            cout << "Affichage des evenements systeme...";
            break;
        case 2:
            cout << "Affichage des connexions reseau...";
            break;
        case 3:
            cout << "Affichage des actions utilisateur...";
            break;
        // Cas particulier pour la sortie
        case 0:
            cout << "Au revoir !";
            break;

        default:
            cout << "Erreur : choix invalide !";
        }

        if (choix != 0)
        {
            cout << "\nAppuyez sur Entrée...";
            cin.ignore(); // Vide le buffer
            cin.get();    // Attend Entrée
        }
    } while (choix != 0);

    return 0;
}
