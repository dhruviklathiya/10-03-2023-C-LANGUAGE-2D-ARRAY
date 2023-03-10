#include <stdio.h>
int main()
{
    int n,m,i,j,row,col;
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
    row = sizeof(a)/sizeof(a[0]);
    col = sizeof(a[0])/sizeof(a[0][0]);
    printf("Total number of rows is: %d\n",row);    
    printf("Total number of columns is: %d\n",col);    
    printf("Total number of element in array is: %d",row*col);
    return 0;
}
