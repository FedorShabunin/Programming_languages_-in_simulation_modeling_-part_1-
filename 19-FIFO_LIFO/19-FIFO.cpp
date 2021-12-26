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
			cout << "������ \n";
			
			exit(0);
		}

		lenght = N;
		array = new int[lenght]; // ��������� ������������ ������
	}

	~FIFO()
	{
		delete[] array; //������������ ������, ���������� ���������� new
	}

	void push(int indicator, int value) //����������� ����� � ���������
	{
		array[lenght - indicator - 1] = value;
	}

	void pop(int a) //����������� ����� �� ����������
	{
		int k = 0;
		while (k < lenght)
		{
			cout << a + 1 << " ������� " << array[lenght - 1] << "\n";
			lenght--;
			a++;
		}
	}

};

int main()
{

SetConsoleCP(1251);
SetConsoleOutputCP(1251);

	cout << "������� ��������� ����� �������: \n";
	int N, �;
	cin >> N;

	FIFO array(N);

	cout << "������� ����� �����: \n";
	int i = 0;
	while (i < N)
	{
		cin >> �;
		array.push(i, �);
		i++;
	}

	for (i = 0; i < N; i++)
		array.pop(i);

	
	return 0;
}