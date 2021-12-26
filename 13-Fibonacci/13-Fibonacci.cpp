#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() {

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

	double n = 0;
	int i = 1, il = 1, k = 2, fl = 0;
    do {
		cout << "Сколько чисел Фибоначчи необходимо вывести? ";
		cin >> n;
		if(cin.fail()) {
	        cin.clear();
	        cin.ignore(10000, '\n');
	        cout << "Ошибка! Введите число еще раз.\n";
	    }
		else {
			if (n >= 1 && (n - int(n) == 0) && n <= 100) {
				if (n == 1) {
					cout << 1 << "\n";
					fl = 1;
				}
				else if (n == 2) {
					cout << 1 << " " << 1 << "\n";
					fl = 1;
				}
				else if (n >= 3) {
					cout << i << " ";
					cout << i << " ";
					do {
						i += il;
						il = i - il;
						cout << i << " ";
						k++;
					} while (k < n);
					fl = 1;
					cout << "\n";
					}
			}
			else {
				cout << "Ошибка! Введите число еще раз.\n";
			}
	    }
	} while (fl == 0);
	return 0;
}
