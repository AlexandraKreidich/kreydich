#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//инициализация массива
void init_array(int A[], const int N){
	cout << "input numbers: " << endl;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
}
//вывод массива
void show_array(int A[], const int N){
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
//сдвиг на к элементов вправо
void arrayRight(int A[], const int N, int k){
	for (int i = 0; i < k; i++){
		int b = A[N - 1];
		for (int j = N - 1; j > 0; j--){
			A[j] = A[j - 1];
		}
		A[0] = b;
	}
}
//сдвиг на к элементов влево
void arrayLeft(int A[], const int N, int k){
	for (int i = 0; i < k; i++){
		int b = A[0];
		for (int j = 0; j < N; j++){
			A[j] = A[j + 1];
		}
		A[N - 1] = b;
	}
}
int main(){
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int A[N] = { 0 };
	init_array(A, N);
	system("cls");
	cout << "array" << endl;
	show_array(A, N);
	int k1 = 0, k2 = 0;
	cout << "input k1: " << endl;
	cin >> k1;
	arrayRight(A, N, k1);
	cout << "new array right: " << endl;
	show_array(A, N);
	cout << "input k2: " << endl;
	cin >> k2;
	arrayLeft(A, N, k2);
	cout << "new array left: " << endl;
	show_array(A, N);
	return 0;
}