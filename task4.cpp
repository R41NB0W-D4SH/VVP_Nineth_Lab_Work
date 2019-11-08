#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, d;
	string hndrd [9] = { "Сто", " Двести", " Триста", " Четыреста", " Пятьсот", " Шестьсот", " Семьсот", " Восемьсот", " Девятьсот" };
	string dec [8] = { " Двадцать", " Тридцать", " Сорок", " Пятьдесят", " Шестьдесят", " Семьдесят", " Восемьдесят", " Девяносто" };
	string single [9] = { " Один", " Два", " Три", " Четыре", " Пять", " Шесть", "Семь", " Восемь", " Девять" };
	
	cout << "Введите число в диапозоне от 100 до 999." << endl;
	cin >> a;
	
	b = (a / 100) - 1;
	c = ((a % 100) / 10 )- 2;
	d = (a % 10) - 1;
	
	if (a % 100 == 11)
	{
		cout << hndrd[b] << " Одиннадцать " << endl;
	}
	else if (a % 100 == 12)
	{
		cout << hndrd[b] << " Двенадцать " << endl;
	}
	else if (a % 100 == 13)
	{
		cout << hndrd[b] << " Тринадцать " << endl;
	}
	else if (a % 100 == 14)
	{
		cout << hndrd[b] << " Четырнадцать " << endl;
	}
	else if (a % 100 == 15)
	{
		cout << hndrd[b] << " Пятнадцать " << endl;
	}
	else if (a % 100 == 16)
	{
		cout << hndrd[b] << " Шестнадцать " << endl;
	}
	else if (a % 100 == 17)
	{
		cout << hndrd[b] << " Семнадцать " << endl;
	}
	else if (a % 100 == 18)
	{
		cout << hndrd[b] << " Восемнадцать " << endl;
	}
	else if (a % 100 == 19)
	{
		cout << hndrd[b] << " Девятнадцать " << endl;
	}
	else
	{
	cout << hndrd[b] << dec[c] << single[d] << endl;
	}
	
	system("pause");
	return 0;
}
