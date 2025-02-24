#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number, id = 1;
	cout << "задайте номер = ";
	cin >> number;
	while (id <= number)                 // пока id меньше или равно number
	{
		cout << id++ << "\t";            // выводит на экран значение id + прибовляет к нему еденицу
	}
}