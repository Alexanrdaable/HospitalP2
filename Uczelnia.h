#pragma once
#include "Budynek.h"
#include <iostream>
#include <fstream>

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
};