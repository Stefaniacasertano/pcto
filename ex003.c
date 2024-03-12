#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("inserisci prima a quanti anni puoi prendere la patente e poi quanti anni hai\n");
    scanf("%d %d", &a ,&b);
    if(b >= a)
    {
        printf("puoi prendere la patente");
    }
    else{
        printf("non puoi prendere la patente");
    }
}