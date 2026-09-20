#include <stdio.h>

int main()
{
    int n,digit,i,max=0,result=0;
    int count[10]={0};

    printf("Enter number: ");
    scanf("%d",&n);

    while(n>0)
    {
        digit=n%10;
        count[digit]++;
        n=n/10;
    }

    for(i=0;i<10;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            result=i;
        }
    }

    printf("Most occurring digit=%d",result);

    return 0;
}
