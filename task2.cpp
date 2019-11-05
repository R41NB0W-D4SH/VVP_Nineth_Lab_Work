#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	//char string[4] = { 'N', 'W', 'S', 'E' };
	char c;
	int dir;
	int N;
	std::string nwse[4] = { "Север", "Запад", "Юг", "Восток" };
	std::string cmds[3] = { "Поврот налево", "Продолжать движение", "Поворот направо" };

	cout << "Введите начальное направление, затем введите номер команды" << endl;
	cin >> c >> N;
	switch (c)
	{
	case 'N':
	case 'n':
		dir = 0;
		break;

	case 'W':
	case 'w':
		dir = 1;
		break;

	case 'S':
	case 's':
		dir = 2;
		break;

	case 'E':
	case 'e':
		dir = 3;
		break;
	default:
		break;
	}

	cout << "Вы выбрали " << nwse[dir] << " как начальное направление робота" << endl;
	cout << "Вы выбрали " << cmds[N + 1] << " команду" << endl;

	system("pause");
	return 0;
}
