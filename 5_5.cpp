#include<iostream>
#include<clocale>
using namespace std;
//������������� �������
void init_array(int A[], const int N){
	cout << "input numbers: " << endl;
	for (int i = 0; i < N; i++){
		cin >> A[i];
	}
}
//����� �������
void show_array(int A[], const int N){
	cout << "your array: " << endl;
	for (int i = 0; i < N; i++){
		cout<< A[i] << endl;
	}
} 
//������� �������� �����, ���� �� �������, �� ���������� -1
void find_number(int A[], const int N, int a){
	int k = 0;
	for (int i = 0; i < N; i++){
		if (A[i] == a){
			cout <<"����� ������� �������� ����� " << i << endl;
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
	cout << "������� �����, ������� �� ������ ����� " << endl;
	cin >> a;
	find_number(A, N, a);
	return 0;
}