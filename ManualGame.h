#pragma once

#include<iostream>

#include"AllFunctions.h"

using namespace std;


void ManualGame() {
	int s = 12;
	int** arr1 = CreateArray(s);
	int** arr2 = CreateArray(s);

	cout << "               YOUR SHIPS " << endl;
	cout << "               \t     ^ " << endl;
	cout << "               \t     | " << endl << endl;
	PrintArray(arr1, s);

	cout << "               ENEMY's SHIPS " << endl;
	cout << "               \t     ^ " << endl;
	cout << "               \t     | " << endl<< endl;
	// SetRandomShipsForP2(arr2,s);
	PrintArray(arr2, s);
}
