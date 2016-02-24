#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
//инициализация массива
void init_mass(int A[], const int N){
	for (int i = 0; i < N; i++){
		A[i] = rand() % 21 - 10;
	}
}
//вывод массива
void show_array(int A[], const int N){
	cout << "array: " << endl;
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
//меняет местами числа
void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}
//поиск максимального элемента
int maximum(int A[], const int N){
	int max = A[0];
	for (int i = 0; i < N; i++){
		if (A[i]>max){
			max = A[i];
		}
	}
	return max;
}
//поиск минимального элемента
int minimum(int A[], const int N){
	int min = A[0];
	for (int i = 0; i < N; i++){
		if (A[i]<min){
			min = A[i];
		}
	}
	return min;
}
//замена чётных чисел максимальным элементом, нечётных минимальным
void sort_max_min_array(int A[], const int N){
	for (int i = 0; i < N; i += 2){
		A[i] = maximum(A, N);
	}
	for (int i = 1; i < N; i += 2){
		A[i] = minimum(A, N);
	}
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
int main(){
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int A[N] = { 0 };
	init_mass(A, N);
	show_array(A, N);
	cout << "sort_max_min" << endl;
	sort_max_min_array(A, N);
}