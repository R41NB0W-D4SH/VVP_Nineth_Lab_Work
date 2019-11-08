#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, d;
	string hndrd [9] = { "Сто", " Двести", " Триста", " Четыреста", " Пятьсот", " Шестьсот", " Семьсот", " Восемьсот", " Девятьсот" };
	string dec [8] = { " Двадцать", " Тридцать", " Сорок", " Пять", " shestdecyat", " semdecyat", " vosemdecyat", " devyanosto" };
	string single [9] = { " odin", " dva", " tri", " chetyre", " pyat", " shest", "sem", " vosem", " devyat" };
	
	cout << "Vvedite chislo v diapozone ot 100 do 999." << endl;
	cin >> a;
	
	b = (a / 100) - 1;
	c = ((a % 100) / 10 )- 2;
	d = (a % 10) - 1;
	
	if (a % 100 == 11)
	{
		cout << hndrd[b] << " odinnadzat " << endl;
	}
	else if (a % 100 == 12)
	{
		cout << hndrd[b] << " dvenadzat " << endl;
	}
	else if (a % 100 == 13)
	{
		cout << hndrd[b] << " trinadzat " << endl;
	}
	else if (a % 100 == 14)
	{
		cout << hndrd[b] << " chetyrnadzat " << endl;
	}
	else if (a % 100 == 15)
	{
		cout << hndrd[b] << " pyatnadzat " << endl;
	}
	else if (a % 100 == 16)
	{
		cout << hndrd[b] << " shestnadzat " << endl;
	}
	else if (a % 100 == 17)
	{
		cout << hndrd[b] << " semnadzat " << endl;
	}
	else if (a % 100 == 18)
	{
		cout << hndrd[b] << " vosemnadzat " << endl;
	}
	else if (a % 100 == 19)
	{
		cout << hndrd[b] << " devyatnadzat " << endl;
	}
	else
	{
	cout << hndrd[b] << dec[c] << single[d] << endl;
	}
	
	system("pause");
	return 0;
}
