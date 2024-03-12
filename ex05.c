#include <stdio.h>
int main()
{
    int a ;
    printf("inserisci numero");
    scanf("%d", &a);
    if(a > 10)
    {
        printf("è maggiore di 10\n");
    }
    else if(a == 5)
    {
        printf("è uguale a 5\n");
    }
    else if(a > 5)
    {
        printf("è maggiore ddi 5\n");
    }
    else if(a < 5)
    {
        printf("è minorre di 5\n");
    }
}