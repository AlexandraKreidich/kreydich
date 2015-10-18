//решение квадратного уравнения
#include <iostream>
#include <clocale>
#include <cmath>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::sqrt;
int main()
{
	setlocale(LC_ALL, "Russian");
	float x1 = 0, x2 = 0, D = 0, a = 0, b = 0, c = 0;;
	cout << " введите коэфициент a= ";
	cin >> a;
	cout << "Введите коэфициент b= ";
	cin >> b;
	cout << " Введите коэфициент с= ";
	cin >> c;
	D = b*b - 4 * a * c;
	if (D > 0){
		x1 = -b + sqrt(D) / (2 * a);
		x2 = -b - sqrt(D) / (2 * a);
		cout << "x1= " << x1 << endl << "x2= " << x2 << endl;
	}
	else {
		if (D == 0){
			x1 = -b / (2 * a);
			cout << "x1= " << x1 << endl;
		}
		else{
				D = -D;
				cout << "x1= " << -b / (2 * a)<< "+" << sqrt(D) / (2 * a) << "i" << endl;
				cout << "x2= " << -b / (2 * a) << "-" <<sqrt(D) / (2 * a) << "i" << endl;
		}
		}
	return 0;
}