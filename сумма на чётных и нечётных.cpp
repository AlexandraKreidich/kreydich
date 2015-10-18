//сумма цифр на чётных позициях, сумма на нечётных. проверка деления на 11
#include <iostream> 
using std::cout;
using std::cin;
int main()
{
	int num = 0, sum1 = 0, sum2 =0 ;
	cout << "input number" << "\n";
	cin >> num;
	while (num){			
		sum1 += num % 10;	
		num /= 10;	
		sum2 += num % 10;
		num /= 10;
	}
	cout << sum1 << "\n"<< sum2 <<"\n";
	if ((sum1-sum2)%11==0) {
		cout << "yes" << "\n";
	}
	else {
		cout << "no" << "\n";
	}
	return 0;
}
