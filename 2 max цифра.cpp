//вывести наибольшую цифру числа
#include <iostream>
#include <clocale>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::sqrt;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num = 0, max = 0, c = 0, i=0, a=0, subnum=0;
	cout << " введите число ";
	cin >> num;
	subnum = num;
	while (num > 0){
		c = num % 10;
		num = num / 10;
		if (c > max){
			max = c;
		}
	}
	while (a < max){
		a = subnum % 10;
		subnum = subnum / 10;
		i++;
	}
	cout << "максимальная цифра числа- " << i << endl << "порядковый номер цифры справа- " << max << endl;
	return 0;
}