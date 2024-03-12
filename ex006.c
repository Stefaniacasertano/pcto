#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (( a / 4 )) && ( a / 100 !=0 ))
    {
        printf("è bisestile ");
    }
    else if ( a / 400 )
    {
        printf("è bisestile");
    }
    else
    {
        printf("non è bisestile");
    }

}