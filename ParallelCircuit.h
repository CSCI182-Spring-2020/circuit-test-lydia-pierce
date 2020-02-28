#pragma once
#include <iostream>
#include "Circuit.h"
using namespace std;

class ParallelCircuit : public Circuit
{
public:
	float _ParallelResistance = 0.0f;
	// ParallelCircuit();
	ParallelCircuit(float resistance) : Circuit(resistance)
	{
		_ParallelResistance = resistance;
	}

	// Copy constructor
	ParallelCircuit(const ParallelCircuit&) {};

	~ParallelCircuit() {};
};

