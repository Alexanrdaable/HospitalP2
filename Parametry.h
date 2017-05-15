#pragma once
#pragma once
#include <string>
using namespace std;
///klasa Parametry zawierajaca dane o rozmiarze szpitala
class Parametry
{
private:
	int szerokosc_sali;
	int dlugosc_sali;
	int szerokosc_lozka;
	int iloscSal;


public:
	Parametry(); //konst.
	Parametry(int s, int d, int sz, int i);
	~Parametry();
	int ilesal();

	//operatory:
	Parametry& operator+(const Parametry & p);


};
