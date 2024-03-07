#include<stdio.h>
void main()
{
    printf("Enter number of rows in matrix\n");
    int r;
    scanf("%d",&r);
    printf("Enter number of columns in matrix\n");
    int c;
    scanf("%d",&c);
    int a[r][c],b[c][r];
    printf("Enter elements");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}