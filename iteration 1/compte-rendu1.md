Imad Oladhammou
Abdou TALBI

# Itération 1 - Menu Interactif C++

#  Etape 0 :Préparation - Déclaration des variables

Objectif : Préparer la structure de base du programme.

``` cpp
#include <iostream>
#include <string>

using namespace std;

int main() {

int choix = -1;

  return 0;

  }
  ````
# Etape 1 : Affichage du titre et du menu

Objectif : Afficher le titre et toutes les options du menu.

```` cpp
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

````

# Etape 2 :  Demander le choix à l'utilisateur

Objectif : Afficher "Votre choix : " et lire la réponse de l'utilisateur.

```` cpp

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

````
# Etape 3 : Traitement des choix valides

Objectif : Utiliser if/else pour réagir aux choix 1, 2, 3 et 0.
```` cpp

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
    `````


# Etape 4 :  Gestion des choix invalides

Objectif : Traiter le cas où l'utilisateur saisit un choix non valide.

```` cpp


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
 ````
