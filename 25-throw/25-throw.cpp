#include <iostream>
#include <Windows.h>

using namespace std;

class CRational {
private:
	int numerator, denominator;
public:
	CRational(int num, int den) 
	{
		numerator = num;
		/*if (den == 0) 
        {
            cout << "Îøèáêà \n";
            exit(0);
        }
        else */
           
		try {
			if (den == 0)
				throw 1;
		}
		catch(int except) {
			 cout << "Деление на 0 \n";
		}
		
		denominator = den;
	}
	CRational() 
	{
        numerator = 1;
        denominator = 1;

		try {
			if (numerator == 0)
				throw 2;
			}
		catch(int except) 
		{
			cout << "Тривиальная дробь (0) \n";
		}

    }
	int NOD (int a, int b) {
		if (b == 0)
			return a;
		else
			return NOD (b, a % b);
	}
	CRational reduce() {
		int num = numerator/NOD(abs(numerator), denominator);
		int den = denominator/NOD(abs(numerator), denominator);
		
		try {
			if (typeid(den) != typeid(1))
				throw 3;
		}
		catch(int except) {
			 cout << "Несовпадение типов \n";
		}
		
		return CRational(num, den);
	}
	CRational sum(CRational otherfrac) {
        int num = numerator*otherfrac.denominator + otherfrac.numerator*denominator;
        int den = denominator*otherfrac.denominator;

		try {
			if (num != numerator*otherfrac.denominator + otherfrac.numerator*denominator)
				throw 4;
		}
		catch(int except) {
			 cout << "Неверный расчет числителя \n";
		}

		return CRational(num, den).reduce();
    }
	CRational dif(CRational otherfrac) {
        int num = numerator*otherfrac.denominator - otherfrac.numerator*denominator;
        int den = denominator*otherfrac.denominator;
		return CRational(num, den).reduce();
    }
	CRational prod(CRational otherfrac) {
        int num = numerator*otherfrac.numerator;
        int den = denominator*otherfrac.denominator;
		return CRational(num, den).reduce();
    }
	CRational div(CRational otherfrac) {
        int num = numerator*otherfrac.denominator;
        int den = denominator*otherfrac.numerator;

		try {
			if (den != denominator*otherfrac.numerator)
				throw 5;
		}
		catch(int except) {
			 cout << "Неверный расчет знаменателя \n";
		}

		return CRational(num, den).reduce();
    }
	void show() {
		if ((denominator != 1) && (abs(numerator) < denominator)) 
            cout << numerator << "/" << denominator << "\n";
		else if ((denominator != 1) && (numerator > denominator)) {
			cout << NOD(numerator, denominator) << " " << numerator - NOD(numerator, denominator)*denominator << "/" << denominator << "\n";
		}
		else if ((denominator != 1) && (numerator < -denominator)) {
			cout << -NOD(-numerator, denominator) << " " << -(numerator + NOD(-numerator, denominator)*denominator) << "/" << denominator << "\n";
		}
		else if ((denominator == 1))
			cout << numerator << "\n";

		try {
				if (denominator != 1)
					throw 6;
			}
			catch(int except) 
			{
				 cout << "Неверный вывод\\n";
			}


	}
};

int main() 
{

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

	CRational first(1, 8);
    CRational second(4, 8);
    CRational result;
	result = first.sum(second);
	result.show();
	result = first.dif(second);
	result.show();
	result = first.prod(second);
	result.show();
	result = first.div(second);
	result.show();
	second.reduce().show();
	return 0;
}
