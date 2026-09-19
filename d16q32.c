#include <stdio.h>

int main()
{
    int n,temp,rev=0,digit;

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }

    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
