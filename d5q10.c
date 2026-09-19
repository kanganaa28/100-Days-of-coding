#include <stdio.h>

int main()
{
    int seconds,hours,minutes,seconds2;

    printf("Enter seconds: ");
    scanf("%d",&seconds);

    hours=seconds/3600;
    seconds2=seconds%3600;
    minutes=seconds2/60;
    seconds2=seconds2%60;

    printf("%d:%d:%d",hours,minutes,seconds2);

    return 0;
}
