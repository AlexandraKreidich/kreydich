//¬водитс€ перевЄрнутое число, сгенерировать перевЄрнутое
#include <iostream> 
using std::cout;
using std::cin;
int main()
{
	int num1 = 0, num2 = 0;
	cout << "input number" << "\n";
	cin >> num1;
	while (num1){			
		num2 = num2 * 10 + num1 % 10;
		num1 /= 10;
	}
	cout << num2 << "\n";
	
	return 0;
}