#include <iostream> 
using std::cout;
using std::cin;
int main()
{
	int num1 = 0, num2 = 0;
	cout << "input number" << "\n";
	cin >> num1;
	int subnum = num1;
	while (subnum){
		num2 = num2 * 10 + subnum % 10;
		subnum /= 10;
	}
	cout << num2 << "\n";
	if (num1 == num2){
		cout << "yes" << "\n";
	}
	else{
		cout << "no" << "\n";
	}
	return 0;
}