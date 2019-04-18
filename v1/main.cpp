#include <iostream>
#include "Soda.h"

using namespace std;

int main()
{

    int choix = 25;
    double monaie = 0;
    cout<< "Payer ... monaie = ";
    cin>> monaie;
    cout<< "Choisir votre bien en tapant le code..."<<endl;;
    while(choix != 0){
        cout<< "1. Soda"<<endl;
        cout<< "0. Quitter"<<endl;
        cout<< "Votre Choix ";
        cin>>choix;

        if (choix == 1){
            system("CLS");
            Soda soda(1,1);
            if (soda.accepterPaiement(monaie)== true){
                    soda.change(monaie);
                    soda.selectionner(choix);
                    soda.serveSoda();
                    soda.ouvrireCompartement();
                    soda.fermerCompartement();
                    system("pause");
                    system("CLS");
            }else{

            }
        }

        if (choix == 0){
            system("CLS");
            system("exit");
            cout<<"Au revoir..."<<endl;
        }
    }

}
