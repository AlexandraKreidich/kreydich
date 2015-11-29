#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;
//перетасовка элементов массива 
void showArray(int A[], const int N){
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}
int main(){
	setlocale(LC_ALL, "russian");
	srand(time(NULL));
	const int N = 10;
	int A[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	showArray(A, N);
	int k1 = 0, k2 = 0;
	k1 = 1 + rand() % 10;
	k2 = 1 + rand() % 10;
	cout << "k1= " << k1 << endl;
	cout << "k2= " << k2 << endl;
	int n = 0;
	cout << "input n " << endl;
	cin >> n;
	system("cls");
	for (int i = 0; i < n; i++){
		swap(A[k1],A[k2]);
	}
	showArray(A, N);
	return 0;
}