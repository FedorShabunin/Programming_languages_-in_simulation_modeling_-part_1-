#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

using namespace std; 

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
cout<<"Строка 1:"<< std::endl;
string line1;
getline(cin, line1); 
string line2; 

    for (int  k= 0; k<line1.size(); k++)
	{
         line2 += line1[k]; 
    }
	
    cout << "Копия Строки 1: " << line2 << endl;

system("pause");
return 0;
} 