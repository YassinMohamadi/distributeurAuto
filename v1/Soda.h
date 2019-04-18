#ifndef Soda_H
#define Soda_H


class Soda {
public:
	// Constructeurs
	Soda(double prixSoda, int codeSoda);

	// méthodes
	bool accepterPaiement(double monaie);
	double change(double monaie);
	bool selectionner(int code);
	void serveSoda();
	void ouvrireCompartement();
	void fermerCompartement();


	//Accesseurs et mutateurs
	void setPrixSoda(double prixSoda);
	double getPrixSoda();

	void setCodeSoda(int codeSoda);
	int getCodeSoda();


private:
	double prixSoda = 0;
	int codeSoda = 0;


};
#endif
