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
//сдвик на к элементов
void array(int A[], const int N, int k){
	for (int i = 0; i < k; i++){
		int b = A[N - 1];
		for (int j = N - 1; j > 0; j--){
			A[j] = A[j - 1];
		}
		A[0] = b;
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
	int k = 0;
	cout << "input k: " << endl;
	cin >> k;
	array(A, N, k);
	cout << "new array: " << endl;
	show_array(A, N);
	return 0;
}