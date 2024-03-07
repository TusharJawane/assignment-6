#include<stdio.h>
int sum=0;
float avg;
void numcheck(int a)
{
    if(a>=avg)
    printf("%d\n",a);

}
void main()
{
    printf("Enter size of array\n");
    int size;
    scanf("%d",&size);
    int num[size];
    printf("Enter elements of array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    avg=sum/size;
    for(int i=0;i<size;i++)
    numcheck(num[i]);
}