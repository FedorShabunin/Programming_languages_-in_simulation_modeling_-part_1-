#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() 
{
setlocale(LC_ALL, "Russian");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
string str , letter;
int i=0,m=0;
char reader[100] , word[100] , b;
cout <<"Введите слово\n";
cin >> str;
cout << str.length() << " букв(ы)\n";
	for (int n=0; n<str.length(); n++) 
	{
		word[n]='_'; 
		cout << word[n];
	}
	cout << "\n";
	
	
	while (i!=str.length()) 
	{
		int  contains=0;
		cout << "Введите букву\n";
		cin >> letter;
		
		if (letter.length()>1 && letter==str)
			{
				cout << "Вы отгадали слово!" << "Ваше слово: " << str;
				i=str.length();
			}
		else 
			if (letter.length()>1 && letter!=str)
				{
					cout << "Вы не отгадали слово!\n" <<"Игра окончена\n" <<"Верное слово:" << str;
					i=str.length();
				}
			else 
				{
					b=letter[0];

					for (int k=0; k<=m; k++) 
					{
						if (m!=k && b==reader[k])
						contains=1;
						else
						reader[m]=b;
					}
		if (contains)
		{
				cout <<"Эта буква уже была, попробуйте снова"<< endl;

				for (int w=0; w<str.length(); w++) 
				cout << word[w] << " ";
		}
		else 
			{
					for (int w=0; w<str.length(); w++) 
					{
						if (reader[m]==str[w])
						{
							word[w]=str[w];
							i++;
						}
						cout << word[w] << " ";
					}
			}
			}
		cout << endl;
		m++;
	}
	return 0;
}