#pragma once
#include <string>
using namespace std;
///klasa Pacjent zawierajaca informacje podstawowe 
class Pacjent
{
private:
	string imie;
	string nazwisko;
	int nrPacjenta;
	int liczbaObjawow;

public:
	Pacjent(); //konst.
	Pacjent(int liczba); //konst.
	Pacjent(string imie, string nazwisko, int numer, int liczbaObjawow);
	~Pacjent();

	bool StanZdrowia();
	int PobierzIloscObjawow();


	Pacjent operator++(int);		
	Pacjent operator--(int);
	operator string() const;

	friend ostream& operator << (ostream &s, Pacjent &p);
};
