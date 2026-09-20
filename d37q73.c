#include <stdio.h>

int main()
{
    int a[10][10],sum[10];
    int r,c,i,j;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix: ");

    for(i=0;i<r;i++)
    {
        sum[i]=0;

        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i]=sum[i]+a[i][j];
        }
    }

    printf("Row sums:\n");

    for(i=0;i<r;i++)
        printf("%d ",sum[i]);

    return 0;
}
