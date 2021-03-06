#pragma once
#include <iostream>
class Ulamek
{
	int licznik;
	int mianownik;
public:
	Ulamek redukcja();
	Ulamek();
	Ulamek(int,int);
	void setLicznik(int);
	int getLicznik() const;
	void setMianownik(int);
	int getMianownik() const;
	friend std::ostream & operator <<(std::ostream & s,const Ulamek & _a);
	friend std::istream & operator >>(std::istream & s, Ulamek & _a);

	const Ulamek operator +=(const Ulamek & _a);
	const Ulamek operator +=(const int & _a);
	const Ulamek operator -();
	const Ulamek operator -=(const Ulamek & _a);
	const Ulamek operator -=(const int & _a);
	const Ulamek operator *=(const Ulamek & _a);
	const Ulamek operator *=(const int & _a);
	const Ulamek operator /=(const Ulamek & _a);
	const Ulamek operator /=(const int & _a);

	friend bool operator ==(const Ulamek& _a, const Ulamek & _b);
	friend bool operator !=(const Ulamek& _a, const Ulamek & _b);
	friend bool operator <=(const Ulamek& _a, const Ulamek & _b);
	friend bool operator <(const Ulamek& _a, const Ulamek & _b);
	friend bool operator >=(const Ulamek& _a, const Ulamek & _b);
	friend bool operator >(const Ulamek& _a, const Ulamek & _b);
	Ulamek operator ++(int);
	Ulamek& operator++();
	Ulamek operator --(int);
	Ulamek& operator--();

	~Ulamek();
};

const Ulamek operator +(const Ulamek & _a, const Ulamek & _b);
const Ulamek operator +(const Ulamek & _a, const int & _b);
const Ulamek operator +(const int & _b, const Ulamek & _a);

const Ulamek operator -(const Ulamek & _a, const Ulamek & _b);
const Ulamek operator -(const Ulamek & _a, const int & _b);
const Ulamek operator -(const int & _b, const Ulamek & _a);

const Ulamek operator *(const Ulamek& _a, const Ulamek & _b);
const Ulamek operator *(const Ulamek& _a, const int & _b);
const Ulamek operator *(const int & _b, const Ulamek& _a);

const Ulamek operator /(const Ulamek& _a, const Ulamek & _b);
const Ulamek operator /(const Ulamek& _a, const int & _b);
const Ulamek operator /(const int & _b, const Ulamek& _a);

