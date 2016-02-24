#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;
void initArray(int A[], int N){
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
}
void showArray(int A[], int N){
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
void deleteElement(int A[], int N, int &k){ // зачем в этой ф-ии менять значение k которое ввели в main? Я не понял?

	for (; k < 9; k++){  // Почему тут число 9. Что за детский сад...
		A[k] = A[k + 1];
	}
	A[N-1] = NULL;
}
int main(){
	setlocale(LC_ALL, "russian");
	srand(time(NULL));
	const int N = 10;
	int A[N] = { NULL };
	initArray(A, N);
	showArray(A, N);
	int k = 0;
	cout << "Введите порядковый номер элемента который вы хотите удалить(от 0 до 9)" << endl;
	cin >> k;
	deleteElement(A, N, k); 
	cout << "новый массив" << endl;
	showArray(A, k); // Почему вызывается не showArray(A, N)???? Не понял сысл такой странной конструкции...
	return 0;
}
