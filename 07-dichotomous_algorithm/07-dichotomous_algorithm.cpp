#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

using namespace std; 

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int maximum_number=100, minimum_number=0, N=0, answer=0, attempts=0, number=0;  
cout<<"��������� ����� N �� 1 �� 100, � � ������!"<< std::endl;
cout<<"������� ���������� �����"<< std::endl;
cin>> N;
	if (N<=100)
	{
		while (answer !=3)
		{
			cout<< "���������� ����� ������, ��� " << (maximum_number + minimum_number) / 2 << " �� - 1, ��� - 2, ����� - 3 " << endl;
			cin >> answer;
			if (answer==1)
			{
				minimum_number = (maximum_number + minimum_number)/2;
			}
			else 
				if (answer==2)
				{
					maximum_number = (maximum_number + minimum_number)/2;
				}
				++attempts;
		}
		number=(maximum_number + minimum_number) / 2;
		cout << " �� �������� " << number << "!" << " � � �������! ���������� �������: " << attempts << endl;
	}
	else
		cout << " �� ����� ����� ������� 100 ��� ������� 0 " << endl;

	if (N=number)
		cout << " ��������� �������� �����. �� ����� �� �������� � �� �������. " << endl;
	else
		cout << " ��������� �������� �������. ��������, �� ���-�� �������� ��� �������. " << endl;

system("pause");
return 0;
} 