#pragma once
#include <iostream>

using namespace std;

class Circuit
{
public:
	// Circuit();

	int* cat;
	int* dog;

	Circuit()
	{
		cat = new int[3];
		dog = new int[3];
		
		cat[0] = 0;
		cat[1] = 0;
		cat[2] = 0;
		
		dog[0] = 0;
		dog[1] = 0;
		dog[2] = 0;
	}
	~Circuit() {
		cout << "Reached destructor.";
		delete[] cat;
		delete[] dog;
		cout << cat;
	};

};

