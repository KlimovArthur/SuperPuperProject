// SuperPuperProject.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "funcs.h"

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

			cout << MySum(a, b) << endl;
			//���������������
			break;
		}
		case 2: 
		{
			cout << MySub(a, b) << endl;
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
		cout << "TAKOI FUNCTION NET" << endl;
	}
	system("pause");
	return 0;
}

