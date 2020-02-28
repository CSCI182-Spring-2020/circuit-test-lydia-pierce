#pragma once
#include <iostream>
#include "Circuit.h"
using namespace std;

class SeriesCircuit : public Circuit
{
public:
	float _SeriesResistance = 0.0f;
	
	// SeriesCircuit();
	SeriesCircuit(float resistance) : Circuit(resistance)
	{
		_SeriesResistance = resistance;
	}

	// Copy constructor
	SeriesCircuit(const SeriesCircuit&) {};

	~SeriesCircuit() {};
};

