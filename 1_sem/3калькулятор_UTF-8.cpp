#include <iostream> 
#include <clocale>
using std::cout;
using std::cin;
using std::endl;
int main(){
	setlocale(LC_ALL, "Russian");
	float num1=0, num2=0, rez=0;
	char op='x';
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	while (op!='e'){
		if (op == 'c'){
			num1 = 0;
			num2 = 0;
			cout << "Введите первое число: ";
			cin >> num1;
			cout << "Введите второе число: ";
			cin >> num2;
			cout << "Операция: ";
			cin >> op;
			switch (op)
			{
			case'+':
				rez = num1 + num2;
				cout << rez << endl;
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;
			case'-':
				rez = num1 - num2;
				cout << rez << endl;
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;
			case'*':
				rez = num1*num2;
				cout << rez << endl;
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;
			case'/':
				if (num2 != 0){
					cout << "num1/num2= " << (rez = (num1 / num2)) << endl;
				}
				else{
					cout << "делить на 0 нельзя" << endl;
				}
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;

			}
		}
		else{
			cout << "Операция: ";
			cin >> op;
			switch (op)
			{
			case'+':
				rez = num1 + num2;
				cout << rez << endl;
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;
			case'-':
				rez = num1 - num2;
				cout << rez << endl;
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;
			case'*':
				rez = num1*num2;
				cout << rez << endl;
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;
			case'/':
				if (num2 != 0){
					cout << "num1/num2= " << (rez = (num1 / num2)) << endl;
				}
				else{
					cout << "делить на 0 нельзя" << endl;
				}
				num1 = rez;
				cout << "Введите второе число: ";
				cin >> num2;
				break;

			}
		}
	}
	return 0;
}