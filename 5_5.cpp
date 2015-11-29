#include<iostream>
#include<clocale>
using namespace std;
//инициализаци€ массива
void init_array(int A[], const int N){
	cout << "input numbers: " << endl;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
}
//вывод массива
void show_array(int A[], const int N){
	cout << "your array: " << endl;
	for (int i = 0; i < N; i++){
		cout<< A[i] << endl;
	}
} 
//находит введЄнное число, если не находит, то возвращает -1
void find_number(int A[], const int N, int a){
	int k = 0;
	for (int i = 0; i < N; i++){
		if (A[i] == a){
			cout <<"номер данного элемента равен " << i << endl;
			break;
		}
		else{
			k++;
		}
	}
	if (k>0){
		cout << "-1" << endl;
	}
}
int main(){
	setlocale (LC_ALL,"Russian");
	const int N = 10;
	int A[N] = { 0 };
	int a = 0;
	init_array(A, N);
	system("cls");
	show_array(A, N);
	cout << "¬ведите число, которое вы хотите найти " << endl;
	cin >> a;
	find_number(A, N, a);
	return 0;
}