
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout <<"================================" << endl;
    cout <<"CIEL - Gestion de logs" << endl;
    cout << "================================" << endl;
    cout <<"Menu principal :" << endl;
    cout <<"1 - Voir les evenements systeme" << endl;
    cout <<"2 - Voir les connexions reseau" << endl;
    cout <<"3 - Voir les actions utilisateur" << endl;
    cout <<"0 - Quitter" << endl;



    int choix = -1;
    cout <<"votre choix: ";
    cin >> choix; 

    if (choix == 1) {
       cout << "Affichage des evenements systeme..." << endl;
      
    }
    else if (choix == 2) {
       cout << "Affichage des connexions reseau..." << endl;
    }
    else if (choix == 3) {
        cout << "Affichage des actions utilisateur..." << endl;
    }
    else if (choix == 0) {
       cout << "Au revoir !" << endl;
    }
    else { 
       cout << "Erreur : choix invalide !" << endl;
    }

    return 0;

  }
 

