#include "Soda.h"
#include <iostream>
using namespace std;

Soda::Soda(double prixSoda, int codeSoda) : prixSoda(prixSoda), codeSoda(codeSoda)
{
}


bool Soda::accepterPaiement(double monaie)
{
    if (monaie>= this->prixSoda){
            cout << "Paiement accepter"<<endl;
            return true;
    }else{
        cout << "Monaie insuffissant pour prendre soda"<<endl;
        return false;
    }
}

double Soda::change(double monaie)
{
    if (monaie>= this->prixSoda){
            cout << "Prendre votre monaie restant " <<monaie - this->prixSoda <<endl;
            return monaie - this->prixSoda;
    }else{
        cout << "Monaie insuffissant pour prendre soda"<<endl;
        return monaie;
    }
}

bool Soda::selectionner(int code){
    if (code == this->codeSoda){
            cout << "Soda selectionner"<<endl;
        return true;
    }else{
        cout << "Veuillez selectionner soda"<<endl;
        return false;
    }
}

void Soda::serveSoda(){
    cout << "Serving soda..."<<endl;
}

void Soda::ouvrireCompartement(){
    cout << "Ouverture du compartement..."<<endl;
}

void Soda::fermerCompartement(){
    cout << "Fermeture du compartement..."<<endl;
}

void Soda::setPrixSoda(double prix)
{
    this->prixSoda = prix;
}


double Soda::getPrixSoda()
{
    return this->prixSoda;
}

void Soda::setCodeSoda(int code)
{
    this->codeSoda = code;
}


int Soda::getCodeSoda()
{
    return this->codeSoda;
}
