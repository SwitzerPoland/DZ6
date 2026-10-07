#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int calc(int num) 
{
    if (num >= 11 && num <= 14) 
    {
        return 3;
    }
    else if (num % 10 == 1) 
    {
        return 1;
    }
    else if (num % 10 >= 2 && num % 10 <= 4) 
    {
        return 2;
    }
    else {
        return 3;
    }
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    int num, type;
    printf("Введите число от 1 до 99: ");
    scanf("%d", &num);
    type = calc(num);
    if (type == 1) 
    {
        printf("%d копейка\n", num);
    }
    else if (type == 2) 
    {
        printf("%d копейки\n", num);
    }
    else 
    {
        printf("%d копеек\n", num);
    }
    system("pause");
    return 0;
}


/*
int main() 
{
    setlocale(LC_CTYPE, "RUS");
    int num;
    printf("Введите число от 1 до 99: ");
    scanf("%d", &num);
    if (num >= 11 && num <= 14) 
    {
        printf("%d копеек\n", num);
    }
    else if (num % 10 == 1) 
    {
        printf("%d копейка\n", num);
    }
    else if (num % 10 >= 2 && num % 10 <= 4) 
    {
        printf("%d копейки\n", num);
    }
    else 
    {
        printf("%d копеек\n", num);
    }
    return 0;
    system("pause");
}
*/
