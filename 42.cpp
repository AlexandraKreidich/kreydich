#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;
//задача є42
int *p = nullptr;
int k = 0;
void showTask(){
	cout << "”далить чЄтные элементы массива ј(N), а положительные отсортировать по убыванию сумм цифр." << endl;
}
void initArray(int *p){
	cout << "¬ведите элементы массива " << endl;
	for (int i = 0; i < k; i++){
		cin >> *(p + i);
	}
}
void initArrayRand(int *p){
	for (int i = 0; i < k; i++){
		*(p + i) = rand() % 1000 + 1;
	}
}
void showArray(int *p){
	cout << "Ёлементы вашего массива: " << endl;
	for (int i = 0; i < k; i++){
		cout << p[i] << endl;
	}
}
void deleteElement(int i, int *p){
	for (; i < k; i++){
		p[i] = p[i + 1];
	}
	k--;
}
void deleteChetnyeElement(int *p){
	for (int i = 0; i < k;){
		if (p[i] % 2 == 0){
			deleteElement(i, p);
		}
		else{
			i++;
		}
	}
}
int sum(int a){
	int sum = 0;
	while (a){
		sum += a % 10;
		a /= 10;
	}
	return sum;
}
void swap(int &u, int&v){
	int a = u;
	u = v;
	v = a;
}
void sortLessSumOfNumb(int *p){
	for (int n = 1; n < k; n++){
		for (int m = 0; m < k - n; m++){
			if (p[m]>0 && p[m + 1]>0){
				if (sum(p[m]) < sum(p[m + 1])){
					swap(p[m], p[m + 1]);
				}
			}
			else if (p[m]>0 && p[m + 1] < 0){
				for (int i = 2; i < k - m; i++){
					if (p[m + i]>0){
						if (sum(p[m]) < sum(p[m + i])){
							swap(p[m], p[m + i]);
							continue;
						}
					}
				}
			}
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int user = 0;
	while (1){
		cout << "¬ведите 1, если хотите просмотреть текст задани€." << endl;
		cout << "¬ведите 2, если хотите проинициализировать массив вручную." << endl;
		cout << "¬ведите 3, если хотите проинициализировать массив случайными числами." << endl;
		cout << "¬ведите 4, если хотите распечатать результат." << endl;
		cout << "¬ведите 5, если хотите выйти из программы." << endl;
		cin >> user;
		switch (user)
		{
		case 1:{
				   showTask();
				   break;
		}
		case 2:{
				   cout << "¬ведите количество элементов массива" << endl;
				   cin >> k;
				   p = new int[k];
				   initArray(p);
				   break;
		}
		case 3:{
				   cout << "¬ведите количество элементов массива" << endl;
				   cin >> k;
				   p = new int[k];

		}
		case 4:{
				   deleteChetnyeElement(p);
				   showArray(p);
				   cout << "ваш новый массив " << endl;
				   sortLessSumOfNumb(p);
				   showArray(p);
				   break;
		}
		case 5:{
				   return 1;
				   break;
		}
		case 6:{
				   cout << sum(p[0]) << endl;
		}
		default:
			break;
		}
	}
}