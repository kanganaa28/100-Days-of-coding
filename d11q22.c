#include <stdio.h>

int main()
{
    float cp,sp,p,l;
    printf("Enter cost price and selling price: ");
    scanf("%f%f",&cp,&sp);

    if(sp>cp)
    {
        p=sp-cp;
        printf("Profit=%.2f\n",p);
        printf("Profit Percentage=%.2f",(p/cp)*100);
    }
    else if(cp>sp)
    {
        l=cp-sp;
        printf("Loss=%.2f\n",l);
        printf("Loss Percentage=%.2f",(l/cp)*100);
    }
    else
        printf("No Profit No Loss");

    return 0;
}
