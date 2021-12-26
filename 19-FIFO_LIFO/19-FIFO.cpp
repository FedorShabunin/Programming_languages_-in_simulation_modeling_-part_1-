#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

class FIFO {
private:
	int *array;
	int lenght;

public: 
	FIFO(int N)
	{
		if (N <= 0)
		{
			cout << "Ошибка \n";
			
			exit(0);
		}

		lenght = N;
		array = new int[lenght]; // выделение динамической памяти
	}

	~FIFO()
	{
		delete[] array; //освобождения памяти, выделенной оператором new
	}

	void push(int indicator, int value) //перемещение числа в контейнер
	{
		array[lenght - indicator - 1] = value;
	}

	void pop(int a) //извлеченние числа из контейнера
	{
		int k = 0;
		while (k < lenght)
		{
			cout << a + 1 << " Выходит " << array[lenght - 1] << "\n";
			lenght--;
			a++;
		}
	}

};

int main()
{

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

	cout << "Введите начальную длину массива: \n";
	int N, с;
	cin >> N;

	FIFO array(N);

	cout << "Введите целые числа: \n";
	int i = 0;
	while (i < N)
	{
		cin >> с;
		array.push(i, с);
		i++;
	}

	for (i = 0; i < N; i++)
		array.pop(i);

	
	return 0;
}