// SuperPuperProject.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>


using namespace std;


int main()
{
	int count; // ���������� ��� ������ � switch
	double a, b; // ���������� ��� �������� ���������
	cout << "Vvedite pervoe chislo: ";
	cin >> a;
	cout << "Vvedite vtoroe chislo: ";
	cin >> b;	
	cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	cin >> count;
	switch (count) // ������ ��������� switch
	{
		case 1: 
		{
			//���������������
			break;
		}
		case 2: 
		{
			//���������������
			break;
		}
		case 3: 
		{
			//���������������
			break;
		}
		case 4: 
		{
			//���������������
			break;
		}
		default: // ���� count ����� ������ ������� ��������
		cout << "Nepravilni vvod" << endl;
	}
	system("pause");
	return 0;
}

