#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

const int SIZE = 5;
int top = 0;
int queue[SIZE] = { NULL };

void push(int value){
	if (top < SIZE){
		top++;
		queue[top - 1] = value;
	}
	else { 
		cout << "Очередь полна!" << endl;
	}
}

int pop(){
	if (top > 0) {
		int temp = queue[0];
		for (int i = 0; i < top; i++){
			queue[i] = queue[i + 1];// не очень хорошая идея постоянно сдвигать массив. А если его размер не 5, а 50000. Тогда совсем медленно работать будет
		}
		top--;
		queue[top] = NULL;
		return temp;
	}
	else { cout << "Очередь пуста!" << endl; }
}

void view(){
	if (top == 0){
		cout << "Очередь пуста" << endl;
	}
	else{
		cout << "Текущая вершина - " << queue[0] << endl;
	}
}

int getNum(){
	cout << "Введите число: ";
	int num;
	cin >> num;
	return num;
}

void getSize(){
	cout << "Текущая длина стека - " << top << endl;
}

int main(){
	setlocale(LC_ALL, "russian");
	push(getNum());
	push(getNum());
	push(getNum());
	view();
	getSize();
	cout << "Извлечено: " << pop() << endl;
	getSize();
	cout << "Извлечено: " << pop() << endl;
	getSize();
	cout << "Извлечено: " << pop() << endl;
	getSize();
	pop();
	push(getNum());
	getSize();
	return 0;
}
