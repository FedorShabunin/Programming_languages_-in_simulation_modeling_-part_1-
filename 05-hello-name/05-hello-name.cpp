#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>

using namespace std; 

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
cout<<"������� ���� ���:"<< std::endl;
string name;
getline(cin, name); 
cout<<"������,"<< name << std::endl;
system("pause");
return 0;
} 