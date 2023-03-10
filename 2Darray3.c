#include <stdio.h>
int main()
{
    int n,m,i,j,sum=0,avg,member;
    printf("How many rows do you want in your array?:");
    scanf("%d",&n);
    printf("How many columns do you want in your array?:");
    scanf("%d",&m);
    int a[n][m];
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
            sum+=a[i][j];
        }
    }
    printf("Sum of all element in array is: %d\n",sum);
    member=n*m;
    avg=sum/member;
    printf("Average of all elemnt in array is: %d",avg);
    return 0;
}
