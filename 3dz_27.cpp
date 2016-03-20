#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;
const int N = 1000;
int main()
{
	char str[N];
	char *p = nullptr;
	cout << "vvedite stroku" << endl;
	cin.getline(str, N);
	cout << "vvedite simvol" << endl;
	char sym = getchar();
	p = (char*)memchr(str, sym, strlen(str));
	while (p != NULL){
			int i = p - str;
			memmove(str + i, str + (i + 1), strlen(str) - i);
			p = (char*)memchr(str, sym, strlen(str));
	}
	cout << "novaya stroka: " << str << endl;
	return 0;
}