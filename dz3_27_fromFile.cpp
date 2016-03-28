#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <iomanip>
#include <clocale>
using namespace std;
const int N = 1000;
void showTask(){
	cout << "Преобразовать каждое слово в строке, удалив в нём заданную букву." << endl;
}
void sortString(char *str, char* str2){
	int i = strcspn(str, str2);
	while (i < strlen(str)){
		strcpy(str + i, str + (i + 1));
		i = strcspn(str, str2);
	}
	cout << str << endl;
}
char* readFromFile(char *str, const int N, char *str2){
	ifstream infile("D:\\fdata.txt");
	while (!infile.eof()){
		infile.getline(str, N);
		sortString(str, str2);
	}
	return 0;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	char str[N], str2[2];
	int ch = 0;
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
				   cout << "vvedite simvol" << endl;
				   cin >> str2;
				   while (strlen(str2) > 1){
					   cout << "vi mozhete vvesti tolko odin simvol" << endl;
					   cin >> str2;
				   }
				   readFromFile(str, N, str2);
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