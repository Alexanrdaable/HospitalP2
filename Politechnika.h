
#pragma once
#include "Uczelnia.h"
#include <iostream>
#include <fstream>

class Politechnika : public Uczelnia {
private:
	int liczbaLaboratori�w;

public:
	Politechnika();
	~Politechnika();

	void zmienLiczbeSal(int nowa_liczba);

};