
#include <iostream>

using namespace std ;


int main () {   

    float note;
    cout << "Entrer une note:";
    cin >> note;
    if (note>10) {
        cout <<"Au-dessus de la moyenne" << endl;

    }
   
    else if (note<10) {  
        cout << "  En dessous de la moyenne "<< endl;
            
    }

    else {  
    cout << " Moyenne " << endl;
    }
    


   

    return 0;
}   





    