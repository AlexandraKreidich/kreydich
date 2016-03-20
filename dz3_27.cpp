#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <clocale>
using namespace std;
const int N = 1000;
void ShowTask(){
	cout << "Преобразовать каждое слово в строке, удалив в нём заданную букву." << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	char str[N], *p = nullptr;
	int ch = 0;
	while (1){
		cout << "Введите 1, чтобы просмотреть задание. Ввведите 2, чтобы начать. Введите 3, чтобы увидеть результат. Введите 4, чтобы закончить." << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
				  ShowTask();
				  break;
		}
		case 2:{
				   cin.get();
				   cout << "введите строку" << endl;
				   cin.getline(str, N);
				   cout << "введите символ" << endl;
				   char sym = getchar();
				   p = (char*)memchr(str, sym, strlen(str));
				   while (p != NULL){
					   int i = p - str;
					   memmove(str + i, str + (i + 1), strlen(str) - i);
					   p = (char*)memchr(str, sym, strlen(str));
				   }
				   break;
		}
		case 3:
		{
			cout << "новая строка: " << str << endl;
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