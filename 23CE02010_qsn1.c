#include<stdio.h>
int primecheck(int k)
{
    int c=0;
    for(int d=2;d<=k;d++)
    {
        if(k%d==0)
        c++;
    }
    if(c>1) return(0);
    else return(1);
}
void main()
{
    printf("Enter lower limit and upper limit");
    int ll,ul;
    scanf("%d %d",&ll,&ul);
    for(int i=ll;i<=ul;i++)
    {
        int val=primecheck(i);
        if(val==1)
        printf("%d\n",i);

        }
}