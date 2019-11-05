#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int day, month;
	cout << "Введите номер дня в месяце (от 1 до 31)" << endl;
	cout << "Введите номер месяца в году (от 1 до 12)" << endl;
	cin >> day >> month;
	day = day - 1;
	month = month - 1;
	string day_s[31] = { "Первое", "Второе", "Третье", "Четвертое", "Пятое", "Шестое", "Седьмое", "Восьмое", "Девятое", "Десятое",
	"Одиннацатое", "Двенадцатое", "Тринадцатое", "Четырнадцатое", "Пятнадцатое", "Шестнадцатое", "Семнадцатое", "Восемнадцатое", "Девятнадцатое", "Двадцатое",
	"Двадцать первое", "Двадцать второе", "Двадцать третье", "Двадцать четвертое", "Двадцать пятое", "Двадцать шестое", "Двадцать седьмое", "Двадцать восьмое", "Двадцать девятое",
	"Тридцатое", "Тридцать первое" };
	string month_s[12] = { "Января", "Февраля", "Марта", "Апреля", "Мая", "Июня", "Июля", "Августа", "Сентября", "Октября", "Ноября", "Декабря" };

	if (day >= 1 && day <= 31 && month >= 1 && month <= 12)
	{
		if ((month == 1 && day > 28) || day > 30 || month > 11 || (month & 2 == 0 && day > 29 && month != 0))
		{
			cout << "Does it djent? No, no, no , no ... NO! It doesn't djent, let's try again, dude." << endl;
			cout << "Джентанёт? Нет, нет, нет, нет ... НЕТ! Не джентануло, попробуй еще раз, чел." << endl;
		}
		else
		{
			cout << day_s[day] << " " << month_s[month] << endl;
		}
	}
	else
	{
		cout << "В месяце не бывает нулевого дня, так же как и тридцать второго." << endl;
		cout << "А в году не бывает нулевого месяца, так же как и триннадцатого." << endl;
		cout << "Так что попробуй еще раз ввести число и месяц, следуя условиям." << endl;
	}

	system("pause");
	return 0;
}
