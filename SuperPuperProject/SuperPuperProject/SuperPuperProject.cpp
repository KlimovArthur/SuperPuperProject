// SuperPuperProject.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "funcs.h"

using namespace std;


int main()
{
	int count; // переменная для выбора в switch
	double a, b; // переменные для хранения операндов
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
			
			break;
		}
		case 2: 
		{
			cout << MySub(a, b) << endl;
			
			break;
		}
		case 3: 

		{
			cout << MyMul(a, b) << endl; 
			
			break;
		}
		case 4: 
		{
			cout << MyDiv(a,b ) << endl;
			
			break;
		}
		default: // если count равно любому другому значению
		cout << "TAKOI FUNCTION NET" << endl;
	}
	system("pause");
	return 0;
}