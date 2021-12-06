#include <iostream>

using namespace std;

class CRational {
private:
	int numerator, denominator;
public:
	CRational(int num, int den) {
		numerator = num;
		if (den == 0) 
        {
            cout << "Oshibka\n";
            exit(0);
        }
        else
            denominator = den;
	}
	CRational() {
        numerator = 1;
        denominator = 1;
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
		return CRational(num, den);
	}
	CRational sum(CRational otherfrac) {
        int num = numerator*otherfrac.denominator + otherfrac.numerator*denominator;
        int den = denominator*otherfrac.denominator;
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
	}
};

int main() {
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