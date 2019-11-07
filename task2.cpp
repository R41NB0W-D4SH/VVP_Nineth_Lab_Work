#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int dir, N;
	string c;

	cout << "Введите начальное направление(Сторону света: N - Север, W - Запад, S - Юг, E - Восток)" << endl;
	cin >> c;

	dir = 0;

	if (c == "N" || c == "n")
	{
		dir = 1;
	}
	else if (c == "W" || c == "w")
	{
		dir = 2;
	}
	else if (c == "S" || c == "s")
	{
		dir = 3;
	}
	else if (c == "E" || c == "e")
	{
		dir = 4;
	}
	else
	{
		cout << "Вы ввели не верную сторону света. Попробуйте еще раз." << endl;
	}
	if (dir != 0)
	{
		cout << "Затем введите номер команды((-1) - Поворот налево, (0) - Продолжать движение, (1) - Поворот направо." << endl;
		cin >> N;
		if (N > -2 && N < 2)
		{
			dir = dir + N;
		}
		else
		{
			cout << "Такой стороны не может быть. Попробуйте еще раз ввести переменные, следуя условиям." << endl;
		}
	
	}
	if (dir == 1 || dir == 5)
	{
		cout << "Робот смотрит в сторону Севера" << endl;
	}
	if (dir == 2)
	{
		cout << "Робот смотрит в сторону Запада" << endl;
	}
	if (dir == 3)
	{
		cout << "Робот смотрит в сторону Юга" << endl;
	}
	if (dir == 0 || dir == 4)
	{
		cout << "Робот смотрит в сторону Востока" << endl;
	}

	system("pause");
	return 0;
}

