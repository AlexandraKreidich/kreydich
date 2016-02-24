#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

const int SIZE = 5;
int top = 0;
int stack[SIZE] = {NULL};

void push(int value){
	if (top < SIZE){
		top++;
		stack[top - 1] = value;
	}
	else { cout << "Стек полон!" << endl; }
}

int pop(){
	if (top > 0) { 
		int temp = stack[top - 1]; // эта переменная действительно нужна???
		stack[top - 1] = NULL;
		top--;
		return temp;
	}
	else { cout << "Стек пуст!" << endl; }
}
 
void view(){ //скорее эта ф-ия должна возвращать то что в вершине...
	if (top == 0){
		cout << "Стек пуст" << endl;
	}
	else{
		cout << "Текущая вершина - " << stack[top - 1] << endl;
	}
}

int getNum(){ //вообще неяно зачем такую ф-ию создавать
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
	pop();
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
