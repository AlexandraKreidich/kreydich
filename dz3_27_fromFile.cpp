#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <clocale>
using namespace std;
const int N = 1000;
void showTask(){
	cout << "Преобразовать каждое слово в строке, удалив в нём заданную букву." << endl;
}
void showResult(char *str){
	cout << "новая строка: " << str << endl;
}
void sortString(char *str, char sym, char *p){
	p = (char*)memchr(str, sym, strlen(str));
	while (p != NULL){
		int i = p - str;
		memmove(str + i, str + (i + 1), strlen(str) - i);
		p = (char*)memchr(str, sym, strlen(str));
	}
}
void readFromFile(char *str, const int N){
	ifstream infile("D:\\fdata.txt");
	while (!infile.eof()){
		infile.getline(str, N);
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	char str[N], *p = nullptr;
	int ch = 0;
	while (1){
		cout << "Введите 1, чтобы просмотреть задание. " << endl;
		cout << "Введите 2, чтобы начать." << endl;
		cout << "Введите 3, чтобы увидеть результат." << endl;
		cout << "Введите 4, чтобы закончить." << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
				  showTask();
				  break;
		}
		case 2:{
				   readFromFile(str, N);
				   cin.get();
				   cout << "введите символ" << endl;
				   char sym = getchar();
				   sortString(str, sym, p);
				   break;
		}
		case 3:
		{
				  showResult(str);
				  break;
		}
		case 4:{
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