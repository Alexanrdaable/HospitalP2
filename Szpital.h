#pragma once
#include "Pacjent.h"
#include "Dane.h"
#include "Parametry.h"
#include "Budynek.h"
using namespace std;

///Klasa dziedziczaca po Budynku - pole D
class Szpital : public Budynek
{
private:
	
	Dane dane;
	Parametry parametry;
	Pacjent *pacjenci;
	
	static int liczbaSzpitali; ///<zmienna statyczna mowiaca o ilosci utworzonych szpitali
	string nazwa;	///<okresla nazwe szpitala
	int liczbaPacjentow;	///<okresla liczbe pacjentow
	int liczbaOddzialow;	///<okresla liczbe oddzialow w szpitalu
	string rodzajSal;		///<okresla rodzaj sal w szpitalu - oddzialy szpitalne
	

public:
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
	void zapiszDoPliku(Szpital &szpital);
	///Metoda odczytujaca dane z pliku
	void odczytZPliku(Szpital &szpital);


	///Metoda pozwalajaca na ustalenie nazwy szpitala
	void UstawNazwe(string nazwa);
	///Metoda pozwalajaca na ustalenie parametrow szpitala
	void UstawParametry(Parametry &p);
	Dane PobierzDane();
	///Metoda pozwalajaca na ustalenie danych 
	void UstawDane(Dane &d);
	///Konstruktor domyslny
	Szpital();	
	///Konstruktor z parametrem
	/**
	\nazwa_Szpitala okresla nazwe
	\liczba_pacjentow okresla liczbe pacjentow zarejestrowanych w danym szpitalu
	*/
	Szpital(string nazwa_Szpitala, int liczba_Pacjentow);
	///Konstruktor kopiujacy
	Szpital(Szpital &szpital);	
	///Destruktor
	~Szpital();	
	
	Parametry ilesal();
	///funkcja wypisuje liczbe sal
	static int wypisz_liczbaSzpitali();
	///funkcja pozwala na ustalenie liczby oddzialow
	void UstawLiczbeOddzialow(int liczba_oddzialow);
	

	///operator > 
	bool operator>(const Szpital &s);    
	///operator przypisania
	Szpital& operator=(const Szpital &s);
	///operator porownania
	bool operator==(const Szpital &d);
	friend bool operator==(const Szpital &d1, const Szpital &d2);
	///zaprzyjazniony operator strumieniowy ostream dla klasy Szpital
	friend ostream& operator << (std::ostream &s, Szpital &szpital);
	///zaprzyjazniony operator strumieniowy istream dla klasy Szpital
	friend istream& operator >> (std::istream& s, Szpital &szpital);
};