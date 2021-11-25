// zad 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <cstdio>
int regist(int);
int main()
{
    char a, b, c, d;
   
    a = getchar();
    if ((a >= 97) && (a <=  122)) regist(a); else printf("\nSimvol ne yavlyaetsya strochnoi latinskoi bukvoi!Povtorite vvod!\n");
 
    b = getchar();
    if ((b >= 97) && (b <= 122)) regist(b); else printf("\nSimvol ne yavlyaetsya strochnoi latinskoi bukvoi!Povtorite vvod!\n");

    c = getchar();
    if ((c >= 97) && (c <= 122)) regist(c); else printf("\nSimvol ne yavlyaetsya strochnoi latinskoi bukvoi!Povtorite vvod!\n");

    d = getchar();
    if ((d >= 97) && (d <= 122)) regist(d); else printf("\nSimvol ne yavlyaetsya strochnoi latinskoi bukvoi!Povtorite vvod!\n");
    
}
int regist(int x)
{
    return putchar(x - 32);
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
