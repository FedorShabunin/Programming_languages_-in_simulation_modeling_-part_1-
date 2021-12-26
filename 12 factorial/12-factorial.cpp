#include <iostream>
#include <stdio.h>
#include <Windows.h>

using namespace std;

int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
	double a = 0;
	int i = 0, f = 1, fl = 0;
    do {
		cout << "¬ведите число: ";
		cin >> a;
		if(cin.fail()) {
	        cin.clear();
	        cin.ignore(10000, '\n');
	        cout << "ќшибка! ¬ведите число еще раз.\n";
	    }
		else {
			if (a >= 0 && (a - int(a) == 0) && a <= 100000) {
				if (int(a) == 0) {
					cout << 1 << "\n";
					fl = 1;
				}
				else {
					for (i=1; i<=int(a); i++) {
						f *= i;
					}
					cout << f << "\n";
					fl = 1;
				}
			}
			else {
				cout << "ќшибка! ¬ведите число еще раз.\n";
			}
	    }
	} while (fl == 0);
	return 0;
}