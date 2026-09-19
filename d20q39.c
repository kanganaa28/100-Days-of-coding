#include <stdio.h>

int main()
{
    int n,digit,product=1;

    printf("Enter number: ");
    scanf("%d",&n);

    for(;n>0;n=n/10)
    {
        digit=n%10;

        if(digit%2!=0)
            product=product*digit;
    }

    printf("Product=%d",product);

    return 0;
}
