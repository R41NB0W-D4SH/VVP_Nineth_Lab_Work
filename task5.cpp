#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string col[5] = { "Зелено", "Красно", "Желто", "Бело", "Черно" };
	string anml[12] = { " крысы", " коровы", " тигра", " зайца", " дракона", " змеи", " лошади", " овцы", " обезьяны", " курицы", " собаки", " свиньи" };
	int a;

	cout << "Введите нужный вам год." << endl;
	cin >> a;

	int ry = (a - 1984);

	
	cout << a << " год - год " << col[ry / 12];

	if (ry % 12 == 2 || ry % 12 == 3 || ry % 12 == 4)
	{
		cout << "го ";
	}
	else
	{
		cout << "й ";
	}
	cout << anml[ry % 12] << endl;

	system("pause");
	return 0;
}
