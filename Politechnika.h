#pragma once
#include "Uczelnia.h"
#include <iostream>
#include <fstream>
using namespace std;

///Klasa dziedziczaca po Uczelni - pole C
class Politechnika : public Uczelnia {
private:
	int liczbaLaboratoriów;	///< okresla liczbe typowych sal - laboratoriow
	string rodzajSal;	///< okresla typ sali - laboratorium
public:
	///Konstruktor domyslny
	Politechnika();
	///Destruktor
	~Politechnika();

	///Metoda zapisujaca dane do pliku
	void zapiszDoPliku(Politechnika &politechnika);
	///Procedura odczytujaca dane z pliku
	void odczytZPliku(Politechnika &politechnika);
	///Procedura zmieniajaca liczbe pomieszczen charakterystycznych dla obiektu
	/**
	Jako parametr podawana jest nowa_liczba
	\param nowa_liczba jest nowa liczba pomieszczen
	\return Funkcja nie zwraca zadnej wartosci
	*/
	void zmienLiczbeSal(int nowa_liczba);
	///Metoda wypisujaca aktualne informacje na temat obiektu
	void wypiszInformacje();
	///operator strumieniowy ostream dla klasy Politechnika
	friend ostream& operator << (std::ostream &s, Politechnika &politechnika);
	///operator strumieniowy istream dla klasy Politechnika
	friend istream& operator >> (std::istream& s, Politechnika &politechnika);
};