#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>
#include <windows.h>

using namespace std;
int Len(unsigned long long int ch);
void raz1(unsigned long long int iin,
	unsigned short int& r1,
	unsigned short int& r2,
	unsigned short int& r3,
	unsigned short int& r4,
	unsigned short int& r5,
	unsigned short int& r6,
	unsigned short int& r7,
	unsigned short int& r8,
	unsigned short int& r9,
	unsigned short int& r10,
	unsigned short int& r11,
	unsigned short int& r12);

void main()
{
	setlocale(LC_ALL, "Rus");
	unsigned long long int iin;
	int den, mes, god, vek,raz,kr;
	unsigned short int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;
	IIN:
	cout << "Введите свой ИИН"<<endl;
	cin >> iin;
	raz = Len(iin);
	raz1(iin, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12);
	kr = (1 * r1 + 2 * r2 + 3 * r3 + 4 * r4 + 5 * r5 + 6 * r6 + 7 * r7 + 8 * r8 + 9 * r9 + 10 * r10 + 11 * r11) % 11;
	
	
	if (raz != 12)
	{
		cout << "Вы ввели не правильно ИИН \n";
		goto IIN;
	}
	else
	{
		if (kr != r12)
		{
			cout << "Поздравляю у Вас не правильный ИИН"<<endl;
		}
		else
		{
			if (r7 == 1 || r7 == 3 || r7 == 5)
			{
				int i;
				char pol [10] = "мужчина";
				cout << "Ваш пол: Вы "; 
				for (i = 0; i < 7; ++i)
					cout << pol [i];

				cout << endl;

			}
			else
			{
				int i;
				char pol [10] = "женщина";
				cout << "Ваш пол: Вы ";
				for (i = 0; i < 7; ++i)
					cout << pol[i];
				cout << endl;
			}
			den = r5 * 10 + r6;
			if (r3 == 0)
			{
				mes = r4;
			}
			else
			{
				mes = r3 * 10 + r4;
			}			
			god = r1 * 10 + r2;
			if (r7 == 1 || r7 == 2)
			{
				god = 18 * 100 + god;
			}
			else if (r7 == 3 || r7 == 4)
			{
				god = 19 * 100 + god;
			}
			else if (r7 == 5 || r7 == 6)
			{
				god = 20 * 100 + god;
			}
			cout << "Вы родились: " << den << "/" << mes << "/" << god << endl;
			if ((den >= 20 && mes == 3) || (den <= 21 && mes == 4))
			{
				cout << "Вы Овен \n";
			}
			else if((den >= 20 && mes == 4) || (den <= 21 && mes == 5))
			{
				cout << "Вы Телец \n";
			}
			else if ((den >= 22 && mes == 5) || (den <= 21 && mes == 6))
			{
				cout << "Вы Близнецы \n";
			}
			else if ((den >= 22 && mes == 6) || (den <= 23 && mes == 7))
			{
				cout << "Вы Рак \n";
			}
			else if ((den >= 24 && mes == 7) || (den <= 23 && mes == 8))
			{
				cout << "Вы Лев \n";
			}
			else if ((den >= 24 && mes == 8) || (den <= 23 && mes == 9))
			{
				cout << "Вы Дева \n";
			}
			else if ((den >= 24 && mes == 9) || (den <= 23 && mes == 10))
			{
				cout << "Вы Весы \n";
			}
			else if ((den >= 24 && mes == 10) || (den <= 21 && mes == 11))
			{
				cout << "Вы Скорпион \n";
			}
			else if ((den >= 22 && mes == 12) || (den <= 20 && mes == 1))
			{
				cout << "Вы Козерог \n";
			}
			else if ((den >= 21 && mes == 1) || (den <= 19 && mes == 2))
			{
				cout << "Вы Водолей \n";
			}
			else if ((den >= 20 && mes == 2) || (den <= 20 && mes == 3))
			{
				cout << "Вы Рыбы \n";
			}
		}
	}
	
	
	
	
}
int Len(unsigned long long int ch)
{	
	int raz = 0;
	while (ch > 0)
	{
		ch = ch / 10;
		++raz;
	}
	return raz;
}
void raz1(unsigned long long int iin,
	unsigned short int& r1, 
	unsigned short int& r2,
	unsigned short int& r3,
	unsigned short int& r4,
	unsigned short int& r5,
	unsigned short int& r6,
	unsigned short int& r7,
	unsigned short int& r8,
	unsigned short int& r9,
	unsigned short int& r10,
	unsigned short int& r11,
	unsigned short int& r12)
{
	int raz1;
	raz1 = Len(iin);
	if (raz1 = 12)
	{
		unsigned long long int ost;
		r1 = iin / 100000000000;
		ost = iin - r1 * 100000000000;
		r2 = ost / 10000000000;
		ost = ost - r2 * 10000000000;
		r3 = ost / 1000000000;
		ost = ost - r3 * 1000000000;
		r4 = ost / 100000000;
		ost = ost - r4 * 100000000;
		r5 = ost / 10000000;
		ost = ost - r5 * 10000000;
		//cout << r5 << " " << ost << endl;
		r6 = ost / 1000000;
		ost = ost - r6 * 1000000;
		//cout << r6 << " " << ost << endl;
		r7 = ost / 100000;
		ost = ost - r7 * 100000;
		//cout << r7 << " " << ost << endl;
		r8 = ost / 10000;
		ost = ost - r8 * 10000;
		//cout << r8 << " " << ost << endl;
		r9 = ost / 1000;
		ost = ost - r9 * 1000;
		//cout << r9 << " " << ost << endl;
		r10 = ost / 100;
		ost = ost - r10 * 100;
		//cout << r10 << " " << ost << endl;
		r11 = ost / 10;
		ost = ost - r11 * 10;
		//cout << r11 << " " << ost << endl;
		r12 = ost;
		//cout << r12 << endl;
	}
	
}