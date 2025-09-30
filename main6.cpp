#include <iostream>

using namespace std;

int main () {


    int a,b,choix;
    
    cout << "1 - a+b"<< endl;
    cout << "2 - a-b" << endl;
    cout << "3 - a*b" << endl;
    cout << "4 - Erreur : choix invalide " << endl;
    cout << "Entrer la valeur a: " ;
    cin >> a;
    cout << "Entrer la valeur b : " ;
    cin >> b;

    cout << "Votre choix : " ;
    cin >> choix;

    switch (choix)
    {

    case 1:
        cout << "a+b = " << a+b << endl;
        break;
    case 2 :
        cout << "a-b = " << a-b << endl;
        break;
    case 3 :
        cout << a*b << a*b << endl;
        break;

    default :
        cout << "Erreur : choix invalide !" << endl;  

    }






}
