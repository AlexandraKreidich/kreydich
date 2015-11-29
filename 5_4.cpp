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
				sum1 += *(A+i*N+j);
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
int main(){
	setlocale(LC_ALL, "russian");
	const int N = 5, M = 5;
	int A[N][M];
	initArray(*A, N, M);
	showArray(*A, N, M);
	cout << "сумма диагонали: " << sumDiag(*A,N,M) << endl;
	cout << "сумма элементов нижнего треугольника: " << sumUnderDiag(*A,N,M) << endl;
}