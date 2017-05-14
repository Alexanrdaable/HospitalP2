#include "Szpital.h"
#include <iostream>
#include<string>
using namespace std;


int Szpital::liczbaSzpitali = 0;
string nazwa_pliku = "Szpital.txt";



Szpital::Szpital()
{
	int liczbaPacjentow = 0;
	pacjenci = new Pacjent[liczbaPacjentow];

	nazwa = "Szpital";
	int liczbaOddzialow = 5;
	string rodzajSal = "Oddzialy szpitalne";
	liczbaSzpitali++;

#ifdef _DEBUG
	cout << "Konstruktor klasy Szpital." << endl;
#endif

}

Szpital::Szpital(string nazwa_Szpitala, int liczba_Pacjentow)
{
	int liczbaPacjentow = 0;
	pacjenci = new Pacjent[liczbaPacjentow];
	parametry = Parametry();
	dane = Dane();

	string nazwaSzpitala = nazwa_Szpitala;
	int liczbaOddzialow = 1;

	liczbaPacjentow = liczba_Pacjentow;

	liczbaSzpitali++;

#ifdef _DEBUG
	cout << "Konstruktor klasy Szpital z parametrami." << endl;
#endif

}


int Szpital::wypisz_liczbaSzpitali()
{
	return liczbaSzpitali;
}


Szpital::Szpital(Szpital &szpital)
{
	liczbaPacjentow = szpital.liczbaPacjentow;
	nazwa = szpital.nazwa;
	liczbaOddzialow = szpital.liczbaOddzialow;
	parametry = szpital.parametry;
	dane = szpital.dane;

	pacjenci = new Pacjent[liczbaPacjentow];

	for (int i = 0; i < liczbaPacjentow; i++)
	{
		pacjenci[i] = szpital.pacjenci[i];
	}

#ifdef _DEBUG
	cout << "Konstruktor kopiujacy klasy Szpital." << endl;
#endif

}

void Szpital::UstawNazwe(string nazwa)
{
	this->nazwa = nazwa;
}


void Szpital::UstawLiczbeOddzialow(int liczba_oddzialow)
{
	this->liczbaOddzialow = liczba_oddzialow;
}

void Szpital::UstawParametry(Parametry &p)
{
	this->parametry = p;
}
void Szpital::UstawDane(Dane &d)
{
	this->dane = d;
}

Dane Szpital::PobierzDane() {
	return this->dane;
}

Pacjent Szpital::PobierzPacjenta() {
	return this->pacjenci[0];
}

void Szpital::DodajPacjenta(string imie, string nazwisko, int nr, int lo)
{
	Pacjent nowyPacjent = Pacjent(imie, nazwisko, nr, lo);

	Pacjent *tempPacjent = new Pacjent[liczbaPacjentow + 1];			

	for (int i = 0; i < liczbaPacjentow; i++)
		tempPacjent[i] = pacjenci[i];


	delete[] pacjenci;
	pacjenci = tempPacjent;
	pacjenci[liczbaPacjentow] = nowyPacjent;

	liczbaPacjentow++;
}


Parametry Szpital::ilesal()
{
	return this-> parametry;
}


//operator przypisana 
Szpital& Szpital::operator=(const Szpital &s)
{
	int liczbaPacjentow = s.liczbaPacjentow;
	string nazwaSzpitala = s.nazwa;
	int liczbaOddzialow = s.liczbaOddzialow;

	return *this;
}

bool Szpital::operator>(const Szpital &s)			//czy wiekszy szpital
{
	if ((liczbaOddzialow > s.liczbaOddzialow) || (liczbaPacjentow > s.liczbaPacjentow))
	{
		return true;
	}
	else {
		return false;
	}
}

bool Szpital::operator==(const Szpital &d)
{
	if (d.nazwa == nazwa && d.liczbaPacjentow == liczbaPacjentow && d.liczbaOddzialow == liczbaOddzialow)
	{
		return true;
	}
	else 
		return false;
	
}


Pacjent& Szpital::operator[](int i)
{
	if (i >= 0 && i < liczbaPacjentow)
		return pacjenci[i];
	else
	{
		cout << "Probujesz znalezc nieistniejacego pacjenta." << endl;
	}	
}

void Szpital::zmienLiczbeSal(int nowa_liczba) {
	liczbaOddzialow = nowa_liczba;

}






void Szpital::wypiszInformacje() {

	cout << "Nazwa budynku: " << nazwa << endl << "Rodzaj sal: " << rodzajSal << endl << "Liczba sal: " << liczbaOddzialow << endl;
}



std::ostream& operator << (std::ostream &s, Szpital &szpital) {
	s << szpital.nazwa << endl << szpital.rodzajSal << endl << szpital.liczbaOddzialow;
	return s;
}


std::istream& operator >> (std::istream& s, Szpital &szpital) {
	s >> szpital.nazwa >> szpital.rodzajSal >> szpital.liczbaOddzialow;
	return s;
}


string nazwaSzpitala = "Szpital.txt"; ///<Nazwa pliku do zapisu stanu obiektu

void Szpital::zapiszDoPliku(Szpital &szpital) {

	ofstream plik_wyjsciowy(nazwaSzpitala);
	plik_wyjsciowy << szpital;
	plik_wyjsciowy.close();
	cout << "Zosta³ wykonany zapis obiektu do pliku Szpital.txt" ;

}






Szpital::~Szpital()
{
	delete[]pacjenci;
	
#ifdef _DEBUG
	cout << "Destruktor klasy Szpital." << endl;
#endif
}



bool operator==(const Szpital &d1, const Szpital &d2)
{
	if (d1.nazwa == d2.nazwa && d1.liczbaPacjentow == d2.liczbaPacjentow && d1.liczbaOddzialow == d2.liczbaOddzialow)
		return true;
	else
		return false;
}