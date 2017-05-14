#pragma once
#include <iostream>
#include <fstream>

using namespace std;

///klasa abstrakcyjna - pole A 
class Budynek {
private: 
	string rodzaj_budynku;
public:
	///konstruktor domyœlny
	Budynek();
	///destruktor wirtualny
	virtual ~Budynek();
	///metody wirtualne:

	
	//void UstawNazwe(string nazwa);
	//void UstawParametry(Parametry &p);
	//Dane PobierzDane();


	///Metoda wirtualna, s³u¿¹ca do wypisywania informacji na temat danego obiektu
	virtual void wypiszInformacje() = 0;

	///Metoda wirtualna, s³u¿¹ca do zmiany liczby odpowiedniego typu pomieszczenia, zale¿nie od typu budynku
	virtual void zmienLiczbeSal(int liczba) = 0;


	///operatory strumieniowe dla klasy Budynek
	friend std::ostream& operator << (std::ostream &s, Budynek &budynek);
	friend std::istream& operator >> (std::istream &s, Budynek &budynek);
};