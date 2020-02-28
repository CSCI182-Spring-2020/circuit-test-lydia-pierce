/* 
Lydia Pierce
CSCI 182
CircuitTest.cpp : Create a class "Circuit" with 2 int arrays. The arrays are filled and destroyed.
*/

#include <iostream>
#include "Circuit.h"
#include "ParallelCircuit.h"
#include "SeriesCircuit.h"
using namespace std;


int main()
{
	// Create instance on the heap
        Circuit* pHeap = new ParallelCircuit(12.5);
		delete pHeap;

		Circuit* mHeap = new SeriesCircuit(11.2);
		delete mHeap;

		// Create instance on the heap
		Circuit* r1 = new Circuit(12.2);
		Circuit* r2 = new Circuit(10.4);
		delete r1;
		delete r2;

        return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
