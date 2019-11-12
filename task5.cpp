#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, ry = (a - 1984);
	string col[5] = { "Зелено", "Красно", "Желто", "Бело", "Черно" };
	string anml[12] = { " крысы", " коровы", " тигра", " зайца", " дракона", " змеи", " лошади", " овцы", " обезьяны", " курицы", " собаки", " свиньи" };

	cout << "Введите год." << endl;
	cin >> a;
	
	cout << col[ry / 12];
	
    if(ry % 12 == 2 || ry % 12 == 3 || ry % 12 == 4)
    {
    cout << "go ";
    }
    else
    {
     cout << "i ";
    }
    cout << anml[ry % 12];


	
	system("pause");
	return 0;
}
