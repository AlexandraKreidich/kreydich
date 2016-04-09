#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
using namespace std;
int **getMem1(int N, int M){
	int **Arr = new int*[N];
	for (int i = 0; i < N; ++i)
		Arr[i] = new int[M];
	return Arr;
}
void initArr(int **Arr, int N, int M){
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < M; ++j){
			Arr[i][j] = rand() % 9 + 1;
		}
	}
}
void showArray(int **Arr, int N, int M){
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < M; ++j){
			cout << Arr[i][j];
		}
		cout << endl;
	}
}
void searchMax(int **Arr, int N, int M, int &max){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (Arr[i][j]>max){
				max = Arr[i][j];
			}
		}
	}
}
int searchFirstRowWithMax(int **Arr, int N, int M, int max){
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			if (Arr[i][j] == max){
				int numrow = i;
				return numrow;
			}

		}
	}
}
int kolvoChetnVStr(int **Arr, int M, int numrow){
	int kolvo = 0;
	numrow++;
	for (int j = 0; j < M; j++){
		if (Arr[numrow][j] % 2 == 0){
			kolvo++;
		}
	}
	return kolvo;
}
void sortArr(int **Arr, int N, int M, int numrow){
	int n1 = 0, n2 = 0, k = numrow + 1;
	for (int i = 1; i < N - k; i++){
		for (int j = 0; j < N - k - i; j++){
			n1 = kolvoChetnVStr(Arr, M, k);
			k++;
			n2 = kolvoChetnVStr(Arr, M, k);
			if (n1>n2){
				swap(Arr[k - 1], Arr[k]);
			}
		}
		k = numrow + 1;
	}
}
void showTask(){
	cout << "54.В массиве А(N,M) расположить строки, стоящие после строки с первым" << endl;
	cout << "максимальным элементом матрицы, в порядке возрастания количества чётных" << endl;
	cout << "элементов в строке." << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int N = 0, M = 0, ch=0, **Arr;
	while (1){
		cout << "Введите 1, чтобы просмотреть задание. " << endl;
		cout << "Введите 2, чтобы начать." << endl;
		cout << "Введите 3, чтобы закончить." << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
				  showTask();
				  break;
		}
		case 2:{
				   cout << "Введите количество строк(N) матрицы" << endl;
				   cin >> N;
				   cout << "Введите количество столбцов(M) матрицы" << endl;
				   cin >> M;
				   Arr = getMem1(N, M);
				   initArr(Arr, N, M);
				   cout << "Ваш массив" << endl;
				   showArray(Arr, N, M);
				   int max = Arr[0][0], numrow = 0;
				   searchMax(Arr, N, M, max);
				   numrow = searchFirstRowWithMax(Arr, N, M, max);
				   sortArr(Arr, N, M, numrow);
				   cout << "Ваш новый массив: " << endl;
	               showArray(Arr, N, M);
				   break;
		}
		case 3:{
				   return 1;
				   break;
		}
		default:
			cout << "неправильный ввод, попробуйте еще раз" << endl;
			break;
		}
	}
	return 0;
}