#pragma once
#include "Uczelnia.h"
#include <iostream>
#include <fstream>
using namespace std;

class Politechnika : public Uczelnia {
private:
	int liczbaLaboratoriów;
	string rodzajSal;
public:
	Politechnika();
	~Politechnika();


	void zapiszDoPliku(Politechnika &politechnika);
	//void odczytZPliku(Politechnika &politechnika);

	void zmienLiczbeSal(int nowa_liczba);
	void wypiszInformacje();
	friend ostream& operator << (std::ostream &s, Politechnika &politechnika);
	friend istream& operator >> (std::istream& s, Politechnika &politechnika);
};