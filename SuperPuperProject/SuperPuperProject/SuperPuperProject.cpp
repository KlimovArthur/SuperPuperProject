// SuperPuperProject.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include "funcs.h"

using namespace std;


int main()
{
	int count; // переменна€ дл€ выбора в switch
	double a, b; // переменные дл€ хранени€ операндов
	cout << "Vvedite pervoe chislo: ";
	cin >> a;
	cout << "Vvedite vtoroe chislo: ";
	cin >> b;	
	cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	cin >> count;
	switch (count) // начало оператора switch
	{
		case 1: 
		{

			cout << MySum(a, b) << endl;
			//–азрабатываетс€
			break;
		}
		case 2: 
		{
			cout << MySub(a, b) << endl;
			//–азрабатываетс€
			break;
		}
		case 3: 
		{
			//–азрабатываетс€
			break;
		}
		case 4: 
		{
			//–азрабатываетс€
			break;
		}
		default: // если count равно любому другому значению
		cout << "TAKOI FUNCTION NET" << endl;
	}
	system("pause");
	return 0;
}

