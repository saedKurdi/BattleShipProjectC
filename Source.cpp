#include<iostream>

#include"AllFunctions.h"

#include"ManualGame.h"

#include"AutomaticGame.h"


using namespace std;


void Start() {
	while (true) {
		ShowMenu();
		int select = 0;
		cin >> select;
		if (select == 1) {
			system("cls");
			ManualGame();
		}
		else if (select == 2) {
			system("cls");
			AutomaticGame();
		}
		else {
			SetColor(4, 0);
			cout << "Some Error occured ! " << endl;
			system("pause");
			SetColor(7, 0);
			system("cls");
		}
	}
}


void main() {
	Start();
}
