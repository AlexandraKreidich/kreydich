#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;
void initArray(char A[], int N){
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
}
void showArray(char A[], int N){
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
int main(){
	setlocale(LC_ALL, "russian");
	const int N = 10;
	char A[N] = { NULL };
	initArray(A, N);
	system("cls");
	showArray(A, N);
	for (int i = N - 1; i > 0; i--){
		if (A[i] == 'z' || A[i] == 'Z'){
			A[i] = 'f';
			break;
		}
	}
	system("cls");
	cout << "Новый массив: " << endl;
	showArray(A, N);
}