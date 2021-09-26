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
cout<<"Задумайте число N от 1 до 100, а я угадаю!"<< std::endl;
cout<<"Введите задуманное число"<< std::endl;
cin>> N;
	if (N<=100)
	{
		while (answer !=3)
		{
			cout<< "Задуманное число больше, чем " << (maximum_number + minimum_number) / 2 << " Да - 1, Нет - 2, Равно - 3 " << endl;
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
		cout << " Вы задумали " << number << "!" << " А я молодец! Количество попыток: " << attempts << endl;
	}
	else
		cout << " Вы ввели число большее 100 или меньшее 0 " << endl;

	if (N=number)
		cout << " Программа работает верно. Вы нигде не ошиблись и не соврали. " << endl;
	else
		cout << " Программа работает неверно. Возможно, Вы где-то ошиблись или соврали. " << endl;

system("pause");
return 0;
} 
