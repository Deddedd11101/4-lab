// zad 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>
int add3(int);
int main()
{
	int a, b,c;
	
	a = _getch(); b = _getch(); c = _getch();
	if ((a >= 48)&& (a <= 53)) { add3(a); printf("\n"); }
	else printf("\nne vhodit[0..5]");
	if ((b >= 48) && (b <= 53)) { add3(b); printf("\n"); }
	else printf("\nne vhodit[0..5]");
	if ((c >= 48) && (c <= 53)) { add3(c); printf("\n"); }
	else printf("\nne vhodit[0..5]");
}
int add3(int x)
{
	return putchar(x + 3);
}
//особенность getch в точ что он не записывает что вводится а сразу после ввода с клавиатуры выдает результат
// getche судя по ошибке при сборке вообще устарело и не может использоваться как и getch, но его можно заменить на _getch
// так же для работы _getch необходимо подключить conio.h

