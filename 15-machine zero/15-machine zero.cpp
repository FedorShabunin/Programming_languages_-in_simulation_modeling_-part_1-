#include<iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{
SetConsoleCP(1251);
SetConsoleOutputCP(1251);

	
	float null = 1.0;
	while (null/2 > 0)
	{
		null /= 2.0f;
	}
	cout << "�������� ���� ��� ���� float: " << null << "\n";

	
	double null_d = 1.0;
	while (null_d/2 > 0)
	{
		null_d /= 2.0;
	}
	cout << "�������� ���� ��� ���� double: " << null_d << "\n";

	
	long double null_l_d = 1.0;
	while (null_l_d/2 > 0)
	{
		null_l_d /= 2.0;
	}
	cout << "�������� ���� ��� ���� long double: " << null_d << "\n";
 





	float e = 1.0;
	while (1 + e > 1)
	{
		e /= 2.0f;
	}
	cout << "�������� ������� ��� ���� float: " << e << "\n";

	
	double e_doub = 1.0;
	while (1 + e_doub > 1)
	{
		e_doub /= 2.0;
	}
	cout << "�������� ������� ��� ���� double: " << e_doub << "\n";

	
	long double e_long_doub = 1.0;
	while (1 + e_long_doub > 1)
	{
		e_long_doub /= 2.0;
	}
	cout << "�������� ������� ��� ���� long double: " << e_long_doub << "\n";

	
	
	

	float negative_inf_f = -FLT_MAX;
	float positive_inf_f = FLT_MAX;
	cout << "�������� ������������� ��� ���� float: " << negative_inf_f << "  " << positive_inf_f << "\n";

	
	double negative_inf_d = -DBL_MAX;
	double positive_inf_d = DBL_MAX;
    cout << "�������� ������������� ��� ���� double: " << negative_inf_d << "  " << positive_inf_d << "\n";

	
	long double negative_inf_ld = -LDBL_MAX;
	long double positive_inf_ld = LDBL_MAX;
	cout << "�������� ������������� ��� ���� long double: " << negative_inf_ld << "  " << positive_inf_ld << "\n";

	



	cout << "����� ��������� ���� � �������� ��� ���� float: " << null + e << "\n";
	cout << "�������� ��������� ���� � �������� ��� ���� float: " << null - e << "\n";

	
	cout << "����� ��������� ���� � �������� ��� ���� double: " << null_d + e_doub << "\n";
	cout << "�������� ��������� ���� � �������� ��� ���� double: " << null_d - e_doub << "\n";


	cout << "����� ��������� ���� � �������� ��� ���� long double: " << null_l_d + e_long_doub << "\n";
	cout << "�������� ��������� ���� � �������� ��� ���� long double: " << null_l_d - e_long_doub << "\n";

	
	return 0;

}
