// zad 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<stdio.h>
#include<conio.h>
int a(char x[]);
int b(char x[]);
int c(char x[]);
int d(char x[]);
int f(char x[]);
int g(char x[]);
int e(char x[]);
int main()
{
    char mass[50], Q;
    int i = 1;
    std::cout << "Vvedite simvoli:" << "\n";
    do
    {
        std::cin >> Q;
        mass[i] = Q;
        i++;
    } 
    while (Q != 46);
    a(mass);
    b(mass);
    c(mass);
    d(mass);
    f(mass);
    g(mass);
    e(mass);
}
int a(char x[])
{
    int i , n = 0;
    for (i = 1; i <= 50; )
    {
        if (x[i++] == 97) n++;
    }
    std::cout<< "Bukv A:" << n << "\n";
    return n;
}
int b(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++)
    {
        if (x[i] == 'e')
            n++;
        if (x[i] == 'u')
            break;
    }
    std::cout <<"Bukv E do U:" << n << "\n";
    return n;
}
int c(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++) 
    {
        if (x[i] == 'o' && x[i + 1] == 'n')
            n++;
        if (x[i] == 'n' && x[i + 1] == 'o')
            n++;
    }
    if (n > 0)
    {
        std::cout << "imeetsa libo ON libo NO v kolichestve:"<< n << "\n";
    }  
    return n;
}
int d(char x[]) 
{
    int i, n = 0;
    for (i = 1; i < 50; i++) 
    {
        if (x[i - 2] == 'c' && x[i - 1] == '+' && x[i] == '+')
            n++;
    }
    std::cout << "C++ v nabore:" << n << "\n";
    return n;
}
int f(char x[])
{
    int i, n = 0, n1 = 0;;
    for (i = 1; i < 50; i++)
    {
        if ((x[i - 2] == '-' && x[i - 1] == '+' && x[i] == '-') or (x[i - 2] == '+' && x[i - 1] == '-' && x[i] == '+'))
            n++;
    }
    for (i = 1; i < 50; i++)
    {
        if ((x[i] == '+') or (x[i] == '-'))
            n1++;
    }
    if (n > 0)
    {
        std::cout << "Est  posledovatelnoct +-:" << "\n";
     }
    else 
        std::cout << "Net posledovatelnoct +-:" << "\n";
    std::cout << "Vot stolko + and - :" << n1 << "\n";
    return n;
}
int g(char x[])
{
    int i, n = 0, n1 = 0;;
    for (i = 1; i < 50; i++)
    {
        if ((x[i - 3] == 'c' && x[i - 2] == 'h' && x[i - 1] == 'a' && x[i] == 'r'))
            n++;
    }
    if (n > 0)
    {
        std::cout << "Est  slovo CHAR" << "\n";
    }
    else
        std::cout << "Net slova CHAR" << "\n";
    return n;
}
int e(char x[])
{
    int i, j, n = 0, countA = 0;
    for (i = 1; i < 50 ; i++) {
        if (x[i] == 'a') {
            countA = 0;
            for (j = i; (int)x[j] < (int)x[j + 1]; j++)
                if ((int)x[j] < (int)x[j + 1])
                    countA++;
        }
        if (countA > n)
            n = countA + 1;
    }
    std::cout<< "Dlina alfavita:" << n << "\n";
    return n;
}