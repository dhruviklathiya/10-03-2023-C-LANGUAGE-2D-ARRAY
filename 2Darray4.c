#include <stdio.h>
int main()
{
    int n,m,i,j,avg,member;
    printf("How many rows do you want in your array?:");
    scanf("%d",&n);
    printf("How many columns do you want in your array?:");
    scanf("%d",&m);
    int a[n][m];
    int b[n][m];
    int sum[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter value for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("2D array according to entered value would look like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter value for [%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("2D array according to entered value would look like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
         printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("After adiiton of both 2D array, array will look like:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
