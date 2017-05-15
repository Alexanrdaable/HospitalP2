#pragma once
#include <iostream>
#include <fstream>

using namespace std;

///Klasa abstrakcyjna - pole A 
class Budynek {
private: 
	string rodzaj_budynku;	///< okresla rodzaj budynku 
public:
	///Konstruktor domyslny
	Budynek();
	///Destruktor wirtualny
	virtual ~Budynek();
	
	///Metoda wirtualna, sluzaca do wypisywania informacji na temat danego obiektu
	virtual void wypiszInformacje() = 0;

	///Metoda wirtualna, sluzaca do zmiany liczby odpowiednich pomieszczen, zale¿nie od typu budynku
	virtual void zmienLiczbeSal(int liczba) = 0;

	///operator strumieniowy ostream dla klasy Budynek
	friend std::ostream& operator << (std::ostream &s, Budynek &budynek);
	///operator strumieniowy istream dla klasy Budynek
	friend std::istream& operator >> (std::istream &s, Budynek &budynek);
};