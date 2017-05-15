#pragma once
#include "Budynek.h"
#include <iostream>
#include <fstream>
using namespace std;

///Klasa dziedziczaca po Budynku - pole B
class Uczelnia : public Budynek {
private: 
	int liczba_uczniow;	///< okresla liczbe uczniow na Uczelni
	
protected: 
	string nazwa;	///< okresla nazwe obiektu 
	int liczbaSalWykladowych;	///< okresla liczbe typowych sal - sal wykladowych
	string rodzajSal;		///< okresla typ sali - sala wykladowa
public:
	///Konstruktor domyslny
	Uczelnia();
	///Destruktor
	~Uczelnia();

	///Metoda wypisujaca aktualne informacje na temat obiektu
	void wypiszInformacje();
	///Metoda zmieniajaca liczbe pomieszczen charakterystycznych dla obiektu
	/**
	Jako parametr podawana jest nowa_liczba
	\param nowa_liczba jest nowa liczba pomieszczen
	\return Funkcja nie zwraca zadnej wartosci
	*/
	void zmienLiczbeSal(int nowa_liczba);
	///Metoda zapisujaca dane do pliku
	void zapiszDoPliku(Uczelnia &uczelnia);
	///Metoda odczytujaca dane z pliku
	void odczytZPliku(Uczelnia &uczelnia);

	///operator strumieniowy ostream dla klasy Szpital
	friend ostream& operator << (std::ostream &s, Uczelnia &uczelnia);
	///operator strumieniowy istream dla klasy Szpital
	friend istream& operator >> (std::istream& s, Uczelnia &uczelnia);
};