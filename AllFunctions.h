#pragma once

#include<iostream>

#include<conio.h>

#include<time.h>

#include<iomanip>

#include<Windows.h>

using namespace std;


void SetColor(int fg ,int bg) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,fg |( bg << 4));
}


void ShowMenu() {
	cout << "\t\t\t WELCOME TO THE BATTLE-SHIP GAME ! LET'S START THE GAME ! " << endl;
	cout << " 1. Manual Game " << endl;
	cout << " 2. Automatic Game " << endl;
}

int**  CreateArray(int size) {
	int** arr = new int* [size] {};
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = new int [size] {};
	}
	arr[0] = new int[size] {7, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	for (size_t i = 0; i < size; i++)
	{
		arr[size - 1][i] = 7;
		arr[i][size - 1] = 7;
	}
	int digit = 49;
	for (size_t i = 1; i < size; i++)
	{
		arr[i][0] = digit++;
		if (i == (size - 1)) {
			arr[i][0] = 7;
		}
	}
	return arr;
}



int SetRandomShipsFor_p1(int ** arr1,int s) {
	int min = 1;
	int max = 10;
	while (true)
	{
		srand(time(0));
		int rY = min + rand() % (max - min + 1);
		int rX = min + rand() % (max - min + 1);
		for (size_t i = 0; i < 5; i++)
		{
			if (arr1[rY + i][rX] == 0) {
				return  1;
			}
			else if (arr1[rY - i][rX] == 0) {
				return 2;
			}
			else if (arr1[rY][rX + i] == 0) {
				return 3;
			}
			else if (arr1[rY][rX - i] == 0) {

			}
		}
	}
}



void SetRandomShipsFor_p2(int** arr2, int s) {
	
}


// bir dene 4 - deneli , iki dene 3 - deneli , uc dene 2 - deneli , dord dene 1 - deneli gemiler yaranacaq random olaraq
// umumi 1 * 4 + 2 * 3 + 3 * 2 + 1 * 4 = 20 dene xana tutulacaq vso  
// eger onlarin etrafinda her hansi sa bir gemi olarsa onda basqa yer yoxlanilir duzulmur ve hemcinin serhedler de yoxlanilir 
// serhedden kenara cixarsa onda gemiler duzulmur bu while(true) olaraq butun gemiler duzulene qeder davam edir 
void PrintArray(int ** arr,int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			if (arr[i][k] == 0) {
				// hecne yoxdur ! (su) 
				SetColor(9, 0);
				cout << setw(2)<<(char)254 << " ";
				SetColor(7, 0);
			}
			else if (arr[i][k] == 1) {
				// gemi ve yaxud gemi hissesi var ! 
				SetColor(6, 0);
				cout << setw(2) << (char)254 << " ";
				SetColor(7, 0);
			}
			else if (arr[i][k] == 7) {
				cout << setw(3) << "  ";//arr[i][k] <<" ";
			}
			else {
				if (i != 10) {cout << setw(2) << (char)arr[i][k] << " ";}
				if (i == 10) { cout<< setw(2) << 10 << " "; }
			}
		}cout << endl;
	}cout << endl << endl;
}


