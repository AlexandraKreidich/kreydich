#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;
void initArray(int *A, const int N, const int M){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			*(A + i*N + j) = 1 + rand() % 20;
		}
	}
}
void showArray(int *A, const int N, const int M){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (*(A + i*N + j) < 10) {
				cout << " " << *(A + i*N + j) << " ";
			}
			else{
				cout << *(A + i*N + j) << " ";
			}
		}
		cout << endl;
	}
}
int sumDiag(int *A, const int N, const int M){
	int sum1 = 0;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (i == j){
				sum1 += *(A + i*N + j);
			}
		}
	}
	return sum1;
}
int sumUnderDiag(int *A, const int N, const int M){
	int sum2 = 0;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (j < i){
				sum2 += *(A + i*N + j);
			}
		}
	}
	return sum2;
}
void sedlovayaPoint(int*A, const int N, const int M){
	int jsedlo = 0;
	bool check = true;
	for (int i = 0; i < N; i++){
		jsedlo = 0;
		for (int j = 0; j < M; j++){
			if (*(A + i*N + j) < *(A + i*N + jsedlo)){
				jsedlo = j;
			}
		}
		check = true;
		for (int i2 = 0; i2 < N; i2++){
			if (*(A + i2*N + jsedlo) > *(A + i*N + jsedlo)){
				check = false;
				break;
			}
		}
		if (check){
			cout << "[" << i << ", " << jsedlo << "] = " << *(A + i*N + jsedlo) << endl;
			break;
		}
	}
	if (!check){
		cout << "Седловых точек нет!" << endl;
	}
}
int main(){
	setlocale(LC_ALL, "russian");
	const int N = 7, M = 7;
	int A[N][M]; //= { {3,4,5}, {2,1,3}, {1,4,2} };
	initArray(*A, N, M);
	showArray(*A, N, M);
	cout << "сумма диагонали: " << sumDiag(*A, N, M) << endl;
	cout << "сумма элементов нижнего треугольника: " << sumUnderDiag(*A, N, M) << endl;
	sedlovayaPoint(*A, N, M);