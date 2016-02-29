#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;
//задача №42
int *p = nullptr;
int k = 0;
void showTask(){
	cout << "Удалить чётные элементы массива А(N), а положительные отсортировать по убыванию сумм цифр." << endl;
}
void initArray(int *p){
	cout << "Введите элементы массива " << endl;
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
	cout << "Элементы вашего массива: " << endl;
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
void sortArr(int *p){
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
void newArray(int *p){
	int flag = 1, a = k;
	while (flag){
		a--; flag = 0;
		for (int i = 0; i < a; i++){
			if (sum(p[i]) < sum(p[i + 1])){
				swap(p[i], p[i + 1]);
				flag = 1;
			}
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int user = 0;
	while (1){
		cout << "Введите 1, если хотите просмотреть текст задания." << endl;
		cout << "Введите 2, если хотите проинициализировать массив вручную." << endl;
		cout << "Введите 3, если хотите проинициализировать массив случайными числами." << endl;
		cout << "Введите 4, если хотите распечатать результат." << endl;
		cout << "Введите 5, если хотите выйти из программы." << endl;
		cin >> user;
		switch (user)
		{
		case 1:{
				   showTask();
				   break;
		}
		case 2:{
				   cout << "Введите количество элементов массива" << endl;
				   cin >> k;
				   p = new int[k];
				   initArray(p);
				   break;
		}
		case 3:{
				   cout << "Введите количество элементов массива" << endl;
				   cin >> k;
				   p = new int[k];

		}
		case 4:{
				   sortArr(p);
				   showArray(p);
				   cout << "ваш новый массив " << endl;
				   newArray(p);
				   showArray(p);
				   break;
		}
		case 5:{
				   return 1;
				   break;
		}
		default:
			break;
		}
	}
}