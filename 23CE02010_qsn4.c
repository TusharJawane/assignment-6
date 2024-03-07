#include<stdio.h>
void main()
{
    int FirstBelongsToSecond=1,SecondBelongsToFirst=1;
    printf("Enter size of first array\n");
    int s1;
    scanf("%d",&s1);
    int arr1[s1];
    printf("Enter elements of first array\n");
    for(int i=0;i<s1;i++)
    scanf("%d",&arr1[i]);
    int s2;
    printf("Enter size of second array(to be checked as a subset)\n");
    scanf("%d",&s2);
    int arr2[s2];
    printf("Enter elements of second array\n");
    for(int i=0;i<s2;i++)
    scanf("%d",&arr2[i]);
    for(int i=0;i<s2;i++)
    {
        int rep=0;
        for(int j=0;j<s1;j++)
        {
            if(arr2[i]==arr1[j])
            rep++;
        }
        if(rep==0)
        {
            SecondBelongsToFirst=0;
            break;
        }
    }
    for(int i=0;i<s1;i++)
    {
        int rep=0;
        for(int j=0;j<s2;j++)
        {
            if(arr1[i]==arr2[j])
            rep++;
        }
        if(rep==0)
        {
            FirstBelongsToSecond=0;
            break;
        }
    }
    if(FirstBelongsToSecond==1 && SecondBelongsToFirst==0)
    printf("First array is the subset of second");
    else if(FirstBelongsToSecond==0 && SecondBelongsToFirst==1)
    printf("Second array is the subset of first");
    else if(FirstBelongsToSecond==1 && SecondBelongsToFirst==1)
    printf("Both arrays are equal");
    else
    printf("Neither of the arrays is a subset of the others");   
}