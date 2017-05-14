#pragma once
#include "Budynek.h"
#include <iostream>
#include <fstream>
using namespace std;

class Uczelnia : public Budynek {

protected: 
	int liczba_uczniow;
	static int liczbaUczelni;
	int liczbaSalWykladowych;
	string nazwa;
	string rodzajSal;
public:
	Uczelnia();
	~Uczelnia();

	void wypiszInformacje();
	void zmienLiczbeSal(int nowa_liczba);
	void zapiszDoPliku(Uczelnia &uczelnia);


	friend ostream& operator << (std::ostream &s, Uczelnia &uczelnia);
	friend istream& operator >> (std::istream& s, Uczelnia &uczelnia);
};