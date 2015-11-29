#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
//������������� �������
void init_mass(int A[], const int N){
	for (int i = 0; i < N; i++){
		A[i] = rand() % 21 - 10;
	}
}
//����� �������
void show_array(int A[], const int N){
	cout << "array 2 " << endl;
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
}
//������ ������� �������������� ����� 
int pos_mass(int A[], const int N){
	int indpos = 0;
	for (int i = 0; i < N; i++){
		if (A[i] > 0){
			indpos = i;
			break;
		}
	}
	return indpos;
}
//������ ���������� �������������� ����� 
int neg_mass(int A[], const int N){
	int indneg = 0;
	for (int i = 0; i < N; i++){
		if (A[i] < 0){
			indneg = i;
		}
	}
	return indneg;
}
//������ ������� �����
void swap(int &a, int &b){
	int t = a;
	a = b;
	b = t;
}
//������ ������� ������ ������������� ����� � ��������� ������������� 
void get_sort_array(int A[], const int N){
	int a = 0, b = 0;
	a = pos_mass(A, N);
	b = neg_mass(A, N);
	swap(A[a], A[b]);
}
int main(){
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int A[N] = { 0 };
	init_mass(A, N);
	show_array(A, N);
	get_sort_array(A, N);
	cout << "new mass" << endl;
	for (int i = 0; i < N; i++){
		cout << A[i] << endl;
	}
	return 0;
}