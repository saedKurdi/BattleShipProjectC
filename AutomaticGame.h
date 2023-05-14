#pragma once

#include<iostream>

#include"AllFunctions.h"

using namespace std;


void AutomaticGame() {
	int s = 12;
	int** arr1 = CreateArray(s);
	int** arr2 = CreateArray(s);

	cout << "               YOUR SHIPS " << endl;
	cout << "               \t     ^ " << endl;
	cout << "               \t     | " << endl << endl;
	// SetRandomShipsForP1(arr1, s);
	PrintArray(arr1, s);

	cout << "\tENEMY's SHIPS " << endl;
	cout << "\t     ^ " << endl;
	cout << "\t     | " << endl << endl;
	// SetRandomShipsForP2(arr2,s);
	PrintArray(arr2, s);


}