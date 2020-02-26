#pragma once
#include <iostream>
using namespace std;

class Circuit
{
protected:
	float _resistance = 0.0f;
public:
	int* cat;
	int* dog;

	// Circuit();
	Circuit(float resistance)
	{
		_resistance = resistance;
		
		
		// Dynamically allocate the correct amount of memory
		cat = new int[3];
		dog = new int[3];

		for (int i = 0; i < 3; i++) {
			cat[i] = 0;
			dog[i] = 0;
		}
		
	};

	virtual ~Circuit()
	{
		//	Deallocate the memory that was previously reserved for these arrays.
		delete[] cat;
		delete[] dog;
		//	cout << cat; // Should produce an error
	};
};

