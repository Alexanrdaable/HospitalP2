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
public:
	Uczelnia();
	~Uczelnia();

	void zmienLiczbeSal(int nowa_liczba);
};