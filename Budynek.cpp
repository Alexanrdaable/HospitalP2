#include <iostream>
#include <string>
#include <fstream>
#include "Budynek.h"

using namespace std;

Budynek::Budynek() {
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Budynek" << endl;
#endif
	rodzaj_budynku = "Nieokreslony";
}


std::ostream& operator << (std::ostream &s, Budynek &budynek) {
	s << budynek.rodzaj_budynku;
	return s;
}


std::istream& operator >> (std::istream &s, Budynek &budynek) {
	s >> budynek.rodzaj_budynku;
	return s;
}

Budynek::~Budynek()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Budynek" << endl;
#endif
}
