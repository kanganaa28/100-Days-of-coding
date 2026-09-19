#include <stdio.h>

int main()
{
    int n,temp,first,last,power=1,result;

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    while(temp>=10)
    {
        power=power*10;
        temp=temp/10;
    }

    first=temp;
    last=n%10;

    result=n;
    result=result-first*power;
    result=result-last;
    result=result+last*power;
    result=result+first;

    printf("Result=%d",result);

    return 0;
}
