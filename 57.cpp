#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;
const int N = 1000;
void show_array(int A[], int kol_voA){
	for (int i = 0; i < kol_voA; i++){
		cout << A[i] << endl;
	}
}
void init_array_rand(int A[], int kol_voA){
	for (int i = 0; i < kol_voA; i++){
		A[i] = rand() % 1000 + 1;
	}
}
void init_array_num(int A[], int kol_voA){
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < kol_voA; i++){
		cin >> A[i];
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Дан массив А(N). Если среди повторяющихся элементов встречаются только чётные числа," << endl;
	cout << "то вывести сообщение “Да”, иначе – сообщение “Нет”." << endl;
	cout << "____________________________________________________________" << endl;
	cout << "Чтобы начать, нажмите 1" << endl;
	cout << "Чтобы завершить, нажмите 2" << endl;
	int n = 0, *A = nullptr;
	cin >> n;
	switch (n)
	{
	case 1:
	{
			  cout << "Введите количество элементов массива: " << endl;
			  int kol_voA = 0;
			  cin >> kol_voA;
			  A = new int[kol_voA];
			  cout << "Чтобы ввести массив с клавиатуры, нажмите 3." << endl;
			  cout << "Чтобы заполнить массив случайными числами, нажмите 4." << endl;
			  int m = 0;
			  cin >> m;
			  if (m == 3){
				  init_array_num(A, kol_voA);
			  }
			  else{
				  init_array_rand(A, kol_voA);
				  cout << "Элемента массива A:" << endl;
				  show_array(A, kol_voA);
			  }
			  int count = 0, c = 0;
			  int B[N] = { 0 };
			  for (int i = 0; i < kol_voA; i++){
				  for (int k = i + 1; k < kol_voA; k++){
					  if (A[i] == A[k]){
						  count++;
					  }
				  }
				  if (count){
					  B[c++] = A[i];
					  count = 0;
				  }
			  }
			  cout << "Элементы массива B: " << endl;
			  show_array(B, c);
			  for (int i = 0; i < c; i++){
				  if (B[i] % 2 == 0){
					  count++;
				  }
			  }
			  if (count == c){
				  cout << "Да" << endl;
			  }
			  else{
				  cout << "Нет" << endl;
			  }
	}
	default:
		break;
	}
}