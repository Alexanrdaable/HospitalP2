#pragma once
#include "Pacjent.h"
#include "Dane.h"
#include "Parametry.h"
#include "Budynek.h"
using namespace std;

class Szpital : public Budynek
{
private:
	
	Dane dane;
	Parametry parametry;
	Pacjent *pacjenci;
	static int liczbaSzpitali;
	string nazwa;
	int liczbaPacjentow;
	int liczbaOddzialow;
	string rodzajSal;
	

public:
	void wypiszInformacje();
	void zmienLiczbeSal(int nowa_liczba);
	void zapiszDoPliku(Szpital &szpital);






	void UstawNazwe(string nazwa);
	void UstawParametry(Parametry &p);
	Dane PobierzDane();
	void UstawDane(Dane &d);

	Szpital();	//konst.
	Szpital(string nazwa_Szpitala, int liczba_Pacjentow);
	Szpital(Szpital &szpital);	//konst. kopiujacy														
	~Szpital();	//dest.
	
	Parametry ilesal();
	static int wypisz_liczbaSzpitali();
	void UstawLiczbeOddzialow(int liczba_oddzialow);
	Pacjent PobierzPacjenta();
	void DodajPacjenta(string imie, string nazwisko, int nr, int lo);
	


	//operatory
	bool operator>(const Szpital &s);    
	Szpital& operator=(const Szpital &s);
	Pacjent& operator[](int i);
	bool operator==(const Szpital &d);
	friend bool operator==(const Szpital &d1, const Szpital &d2);
	friend ostream& operator << (std::ostream &s, Szpital &szpital);
	friend istream& operator >> (std::istream& s, Szpital &szpital);
};