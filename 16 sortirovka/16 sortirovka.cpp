#include <iostream>
#include <ctime>

int a[100];

using namespace std;

void obmen_1(int *x, int *y) {
	swap (*x, *y);
}

void obmen_2(int *x, int *y) {
	int k;
	k = *x;
	*x = *y;
	*y = k;
}

void obmen_3(int *x, int *y) {
	int k;
    k = *x - *y;
    *x = *y;
    *y = *x + k;
}

void Puzirek(int N) {
	int i, j;
	for (i=0; i<N; i++) {
		for (j=N-1; j>i; j--) {
			if (a[j-1] > a[j]) {
				obmen_1(&a[j-1],&a[j]);
			}
		}
	}
	}


int main() {
	int N=0, i=0;
	cout << "Vvedite chislo elementov v massive: ";
	do {
		cin >> N;
		if (N > 100) {
			cout << "Oshibka!" << "\n";
		}
	} while (N > 100);

	srand(time(NULL));
	cout << "Ishodnii massiv:" << "\n";
	for (i=0; i<N; i++) {
		a[i] = rand() % (N+1); // 0 ... 100
		cout << a[i] << " ";
	}
	cout << "\n";

	Puzirek(N);
	cout << "Otsortirovannii massiv:" << "\n";
	for (i=0; i<N; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}