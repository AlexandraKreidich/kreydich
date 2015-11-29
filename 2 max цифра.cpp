<<<<<<< HEAD
//the greatest figure of number
=======
//наибольшая цифра числа
>>>>>>> ef0af6bc1ff64a9e17641392b1eee69238679897
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
<<<<<<< HEAD
	cout << " input number ";
=======
	cout << " введите число ";
>>>>>>> ef0af6bc1ff64a9e17641392b1eee69238679897
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
<<<<<<< HEAD
	cout << "the greatest figure of number- " << i << endl << "the greatest figure of number- " << max << endl;
=======
	cout << "наибольшая цифра числа- " << i << endl << "порядковый номер цифры справа- " << max << endl;
>>>>>>> ef0af6bc1ff64a9e17641392b1eee69238679897
	return 0;
}
