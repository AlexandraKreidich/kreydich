#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;
void initArray(char A[], char B[], const int N){
	for (int i = 0; i < N; i++){
		A[i] = B[rand() % 4];
	}
}
void showArray(char A[], const int N){
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
int main(){
	setlocale(LC_ALL, "russian");
	const int N = 7;
	char A[N];
	char B[] = { 'Т', 'К', 'Д', 'В' };
	initArray(A, B, N);
	showArray(A, N);
	return 0;
}