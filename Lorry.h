#pragma once
#include "Car.h"

class Lorry : public Car
{
private:
	int capacity_of_car;

public:
	int getCapacity_of_car() const { return capacity_of_car; }
	void setCapacity_of_car(int capacity_of_car) { this->capacity_of_car = capacity_of_car; }

	Lorry(const string model = "", const int cylinder = 0, const double power = 0, const int capacity_of_car = 0);
	Lorry(const Lorry& s);
	~Lorry(void);

	Lorry& operator = (const Lorry& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Lorry& s);
	friend istream& operator >> (istream& in, Lorry& s);
};