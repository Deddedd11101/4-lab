// zad 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
//int a(char x[]);
//int b(char x[]);
//int k(char x[]); 
int l(char x[]);
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
    } while (Q != 46);
   // a(mass);
    //b(mass);
    //k(mass);
    l(mass);
}
//заменить все символы ‘ ? ’ на’!’;
/*int a(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++)
    {
        if (x[i] == '?') 
        {
          x[i] = '!';
          n++;
        }   
    }
    for (i = 1; i <= n; i++)
    {
        std::cout << x[i] << ",";
    }
    return n;
}*/
//удалить все символы ‘ - ‘ и удвоить все символы ‘ & ’;
/*int b(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++)
    {
        if (x[i] == '-') {
            x[i] = ' ';
        }
        if (x[i] == '&') {
            x[i] = '&';
            std::cout << "&";
        }
        n++;
        std::cout << x[i] << ",";
    }
    return n;
}*/
//удалить все символы, не являющиеся строчными латинскими буквами;
/*int k(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++)
    {
        if ((x[i] >= 97) && (x[i] <= 122))
        {
            x[i] = x[i];
        }
        else {
            x[i] = ' ';
        }
        n++;
        std::cout << x[i] << ",";

    }
    return n;
}*/
//заменить все прописные латинские буквы строчными
/*int k(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++)
    {
        if ((x[i] >= 97) && (x[i] <= 122))
        {
            x[i] = x[i] - 32;
        }
        n++;
        std::cout << x[i] << ",";
    }
    return n;
}*/
//заменить все строчные латинские буквы прописными
/*int k(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++)
    {
        if ((x[i] >= 65) && (x[i] <= 90))
        {
            x[i] = x[i] + 32;
        }
        n++;
        std::cout << x[i] << ",";
    }
    return n;
}*/
//удалить все комбинации символов the;
/*int k(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++) {
        if ((x[i - 2] == 't' or 'h' or 'e') && (x[i - 1] == 't' or 'h' or 'e') && (x[i] == 't' or 'h' or 'e'))
        {
            x[i - 2] = ' ';
            x[i - 1] = ' ';
            x[i] = ' ';
        }
        n++;
        std::cout << x[i] << ",";
    }
    return n;
}*/
//оставить только те группы цифр, которые составлены из подряд идущих цифр с возрастающими значениями;
/*int l(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++) {
        if ((x[i] >= 48) && (x[i] <= 57))
        {     
                if ((x[i - 2] < x[i - 1]) && (x[i - 1] < x[i]) && (x[i - 2] < x[i]))
                {
                    n++;
                }
                else
                {
                    x[i] = ' ';
                }     
        }
        std::cout << x[i] << ",";
    }
    return n;
}*/
//заменить все комбинации символов child комбинациями символов children;
/*int l(char x[])
{
    int i, n = 0;
    for (i = 1; i <= 50; i++)
    {
        if ((x[i] == 'c') && (x[i + 1] == 'h') && (x[i + 2] == 'i') && (x[i + 3] == 'l') && (x[i + 4] == 'd'))
        {
            x[i + 5] = 'r';
            x[i + 6] = 'e';
            x[i + 7] = 'n';
        }
        std::cout << x[i];
    }
    return n;
}*/
//удалить группы символов, расположенные между фигурными скобками{ и }
int l(char x[])
{
    int i, n = 0,j;
    for (i = 0, j = 0; x[i]; ++i)
    {
        if (x[i] == '{') 
        {
            while (x[++i] && x[i] != '}') 
                ;
            if (!x[++i]) 
                break;
        }
        x[j] = '\0';
        std::cout << x[i];
    }
    
    return n;
}
